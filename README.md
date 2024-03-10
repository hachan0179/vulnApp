# 脆弱性を試すためのコンテナ環境づくり

随時更新中

# 使用方法
## コンテナイメージのビルド
必要なコンテナイメージとdocker-composeをビルドをします。
```
    $ source ./build.sh
```
## コンテナの起動
```
    $ docker-compose up
```

# コンテナ

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

### rop1 
引数を指定するROP
```
nc localhost 5000
```
<http://chall.localhost:8080/get/hidden_rop1.c><br>
<http://chall.localhost:8080/get/rop1.elf>

### rop2
ライブラリからガジェットを集めてシェルの奪取
```
nc localhost 5001
```
<http://chall.localhost:8080/get/rop2.c><br>
<http://chall.localhost:8080/get/rop2.elf><br>
<http://chall.localhost:8080/get/ld-linux-x86-64.so.2>


