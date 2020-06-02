# Yandex-Black

## Compile protobuf

```shell script
protoc -I . --cpp_out . person.proto 
```


```shell script
clang++ -std=c++1z -Xclang -fdump-record-layouts Dog.cpp | less
clang++ -std=c++1z -Xclang -fdump-vtable-layouts Dog.cpp | less
```