# 脆弱性を試すためのコンテナ環境づくり

随時更新中

# コンテナ

## welcome
接続してみましょう
```
nc localhost 4000
```
## bof1 
単純なリターンアドレスを書き換えるバッファオーバーフロー
```
nc localhost 4001
```
<http://chall.localhost:8080/chall/bof1.elf>

## rop1 
引数を指定するROP
```
nc localhost 5000
```
<http://chall.localhost:8080/chall/hidden_rop1.c><br>
<http://chall.localhost:8080/chall/rop1.elf>

## rop2
動的リンクされるところからガジェットを集めてシェルの奪取
```
nc localhost 5001
```
<http://chall.localhost:8080/chall/rop2.c><br>
<http://chall.localhost:8080/chall/rop2.elf><br>
<http://chall.localhost:8080/chall/ld-linux-x86-64.so.2>

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
