#  proto使用说明

## 生成 .h/.m文件

- 首先进入.proto存放文件夹，如：cd /Users/ningjinpeng/Desktop/GitOSChina/bytedeskios/bdcore/bdcore/protobuf
- 运行命令生成：
- objective-c版本：protoc --proto_path=. --objc_out=. config.proto request.proto group.proto hello.proto message.proto thread.proto user.proto queue.proto workGroup.proto
- (忽略)c++版本：protoc --proto_path=. --cpp_out=. group.proto hello.proto message.proto thread.proto user.proto
- 生成.h/.m文件之后，将其拖入xcode
- 在Build phase里面给生成的.m文件设置-fno-objc-arc参数
