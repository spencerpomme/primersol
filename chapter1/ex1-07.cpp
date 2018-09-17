int main() {
    /* Shoud not nest /**/
    */
    return 0;
}

// Error message:
/*
PS D:\GITHUB\primersol\chapter1> clang ex1-07.cpp -o ex1-07.exe
ex1-07.cpp:2:23: warning: '/*' within block comment [-Wcomment]
    \/\* Shoud not nest \/*\*\/
                      ^
ex1-07.cpp:3:6: error: expected expression
    \*\/
     ^
ex1-07.cpp:4:5: error: expected expression
    return 0;
    ^
1 warning and 2 errors generated.

*/