# Shapes Parser
------------------------------------------------------------------
## Cách build DLL
1. Viết File.h như bình thường sau đó chúng ta thêm những dòng sau :
```c++
#ifdef BUILD_TEXT_PROVIDER
#define TEXT_PROVIDER_API __declspec(dllexport)
#else
#define TEXT_PROVIDER_API __declspec(dllimport)
#endif
```

2. Sau đó ta cài đặt những hàm trong file.h vào file.cpp và thêm vào đầu hàm như này :
```c++
extern "C" TEXT_PROVIDER_API shared_ptr<ShapesTextProvider> createTextProvier();
```
3. Biên dịch file dll.  
Để biên dịch file dll chúng ta gõ câu lệnh như sau :
```cmd
g++ -DBUILD_TEXT_PROVIDER -shared *.cpp -o ShapesTextProvider.dll
```
4. Ta cần khai báo windows.h và sử dụng thư viện.  
   Dưới đây là ví dụ về hàm main
```c++
const char dll_file_path[] = "ShapesTextProvider.dll";
    HINSTANCE hDll = LoadLibrary(dll_file_path);
    if (!hDll)
    {
        return 0;
    }
    const char function_name[] = "createTextProvier";
    CREATE create_shapesTextProvider = (CREATE)GetProcAddress(hDll, function_name);

    auto [shapes, n] = create_shapesTextProvider()->next("Shapes.txt");
    
    shared_ptr<IConverter> converter = make_shared<TextConverter>();
```
  do GetProcAddress trả về con trỏ hàm nên ta nên typedef trước trong file.h 
```c++
typedef shared_ptr<ShapesTextProvider> (*CREATE)();
```
--------------------------------------------------------
## Cách chạy chương trình 
1. Bật cmd lên
2. cd đến Folder chứa những file cần chạy
3. Biên dịch file exe bằng câu lệnh "g++ *.cpp -o main"
4. Chạy file exe bằng câu lệnh ".\main"
5. Dưới đây là ví dụ :
<img width="960" alt="image" src="https://github.com/AnCaoTrinh/Project-ShapesParser/assets/143874483/94aa6caa-dd3d-45f0-898e-2a6a09a507b2">

