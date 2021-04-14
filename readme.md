# Readme

Strange error on build: 

```
3>LibraryB.lib(Opponent.obj) : error LNK2019: unresolved external symbol "public: __thiscall A::PlayerId::PlayerId(int &&)" (??0PlayerId@A@@QAE@$$QAH@Z) referenced in function "void __cdecl _DOCTEST_ANON_SUITE_2::_DOCTEST_ANON_FUNC_3(void)" (?_DOCTEST_ANON_FUNC_3@_DOCTEST_ANON_SUITE_2@@YAXXZ)
3>C:\Workspace\TypeSafeLInkErrorRepro\vs\..\build\TestRunner\All\TestRunner.exe : fatal error LNK1120: 1 unresolved externals
3>Done building project "TestRunner.vcxproj" -- FAILED.
```