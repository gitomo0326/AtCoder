# AtCoder

## SourceTree&GitHubリポジトリ新規作成時設定
### GitHub
1. Window左上のアイコンをクリック
2. `Settings`を開く
3. 左のタスクバーから`Developer settings`→`Personal access tokens`をクリック
4. Window左上の`Generate new token`→`Generate new token (classic)`を選択
5. `Note`にトークンの名称を記入
6. `Expiration`を設定
7. `Select scopes`にて`repo`と`admin:repo_hook`にチェック
8. `Generate token`でトークンを生成
9. トークンをコピー(一度画面を遷移すると二度とコピーできないので注意)

### SourceTree
1. `ツール`→`オプション`をクリック
2. `認証`タブを選択
3. 下記を設定
  * ホスティングサービス : GitHub
  * 優先するプロトコル : HTTPs
  * 認証 : OAuth
  * ユーザー名 : アカウントのユーザ名
  * `OAuthトークンを再読み込み`をクリック
4. 認証に成功すればOK
5. リポジトリをクローンする
  * `元のパス/URL`に下記書式で登録
    * `https://[コピーしたトークン]@github.com/gitomo0326/AtCoder.git`
6. PushできればOK