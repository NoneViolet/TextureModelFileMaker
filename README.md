# TextureModelFileMaker
Minecraftのテクスチャを作成するとき、CustomModelDataを設定するための[数字.json]をいっぱい作るのがめんどくさかったので作りました。プログラミングが何かほぼ知らん人が作りました。

## Demo
始めの数字、終わりの数字、元アイテムのID、parent先を入力すると、初めの数字から終わりの数字まで[数字.json]ファイルを作成してくれます。
中身は以下のようになります
```
{
	"parent": "item/指定したparent先",
	"textures": {
		"layer0": "item/指定した元アイテムのID/数字"
	}
}
```

## Usage
正直使ってもらうのにいい感じにする方法がよく分かってないので取り敢えずソースコードをべったり貼ります。需要があるとは思いませんが必要であれば各自いい感じに使ってください。

## VS. 
特になし。というか勉強のために自分で作ってみたかった。もっといいツールあるならだれか教えてください...

## Other
正直Github使ってみたかった、Github使う練習してみたかったっていう意図も兼ねてます。
何かあればご指摘ください。
