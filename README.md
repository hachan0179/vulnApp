# 脆弱性を試すための遊び場

随時更新予定

# 使用方法
## コンテナイメージのビルド
必要なコンテナイメージとdocker-composeをビルドをします。
```
source ./build.sh
```
## コンテナの起動
```
docker-compose up
```

# コンテナ一覧

### welcome
接続してみましょう
```
nc localhost 4000
```
### bof1 
単純なリターンアドレスを書き換えるバッファオーバーフロー
```
nc localhost 4001
```
<http://chall.localhost:8080/get/bof1.elf>

### bof2
canaryを漏洩させてからリターンアドレスを書き換える
```
nc localhost 4002
```
<http://chall.localhost:8080/get/bof2.c><br>
<http://chall.localhost:8080/get/bof2.elf>

### rop1 
引数を指定するROP
```
nc localhost 5000
```
<http://chall.localhost:8080/get/rop1.c><br>
<http://chall.localhost:8080/get/rop1.elf>

### rop2
ライブラリからガジェットを集めてシェルの奪取
```
nc localhost 5001
```
<http://chall.localhost:8080/get/rop2.c><br>
<http://chall.localhost:8080/get/rop2.elf><br>
<http://chall.localhost:8080/get/libc.so.6>


