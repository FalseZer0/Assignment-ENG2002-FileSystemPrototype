# Assignment-ENG2002-FileSystemPrototype
By using Microsoft Visual Studio 2017, develop an object-oriented console application of file system, which can display the names of folders and files, and also perform operations on file names, such as creating a new file name or deleting an existing file name (since this is only a conceptual application, we are merely dealing with file names instead of real files). You are given three text files, which are named “folderName”, “IOS”, and “WINDOWS”. “folderName” stores folder names in this file system; “IOS” stores the names of the files in the folder named IOS, and “WINDOWS” stores the names of the files in the folder named WINDOWS. You can prepare and check the contents of these three files using word processing tools such as Notepad, MS Word or WordPad. The developed file system should be able to read the contents from these three files, and display all the folder names as well as all the file names in each folder. An example is shown below, where “WINDOWS” is the name of the first folder, and “IOS” is the name of the second folder. As shown below, there are 6 file names in the first folder and 5 file names in the second folder. You do not need to follow this style; for example, you can also display the file names in each folder differently, but you must have a way to display all the file names and their corresponding folder names.
##**The console application retrieves names of "imagenary" folders&files. Then it displays it in the menu and allows the user to choose one of primitive operations on those names.**
The *create file* option is a dummy plug, because it was not part of the assignment

The list of the requirments:
1.Read and display text from txt files
2.Display the menu of options
3. Realize the delete function
4. Realize the search function
5. Realize the copy function
6. Every change has to be automatically saved in same txt files

　　　　　　　＿＿_　　　　　　 　 　 ＿
　　　　　　　　　　　　　　　　　　　 　 　 .　-‐'^~￣::::::::::::::::::::::｀丶、｢＼　 /　 {-─- 、
　　　　　　　　　　　 　 　 　 　 　 　 ／ _.. -‐=≠:::::::─-ミ ::::::::::::: /　　∨　　 ∨::::::::::＼
　　　　　　　　　　 　 　 　 　 /＼／　'´ ..:::::::::::::::::::::::::::::::::::.｀丶、厶 -─}_]‐-　 Ｖ┐:::::::::l
　　　　　 　 　 　 　 　 ＿__　{　 ／　 ..::::::::::::::::::::::::::::::::::::::::::::::::..　く　　　 ﾊヽ　∨ /::::::::::::|
　　　　　　　　　　　／.:::::::::r勺::::／..::::::::::::{::::::::::::::::..＼:::::::::::::::::::::::..＼　/:::|　　jﾍ/::::::::::::::|_
　　　　　　 　 　 　 l::::::::l^V　/::/ .:::::::::::::::/|::::::l::::l＼::::..＼:::::＼:::::::::::. ∨::::｢`lノ{　｢ヽ::::／.ｲ
　　　　　　 　 　 　 |:::く∧ ∨::/ .::::::: l::::::/ |::::::l::::|　 ＼::::..＼:::::ヽ::::::::::: ::::::}　l/{　| :{ Y /::::|
　　　　　　　　__　　|::::〈_,ﾑ　V.:::{＾l:::::|::::ｌ　 l::::::ﾄ､|　　　ｘヘ:::::::::::ﾍ:::::::::::::::/　 └ し'　 ﾙ:::::|
　　　　　　　　＼ ､ |:::::rﾍ　',　':::l　}::::|::::l 　 ｌ:::::　ヽ　 '　　_,, ＞--ﾍ|:::::::|::{　　　　／　{:::::::::|
　　　　　　　　　 ＼＼{ﾄ､ヽ. '　ﾏ　Ｖ::ﾚ-{‐-､ｌ:::ヽ　 ＼　 ,ｨf庁ぅｯ､ :|:::::::|八　　　　　 人:::::::|
　　　　　　　　　　　l:、　 ヽＪ┘　　}:::|　 ＼　l::: 　　　　 ハkr:::)小〉|::::::rヘ》ｰ-r‐fT^　 ∨八
　　　　　　　　　　　|ﾊ　　　　/　 　}:::|　　　　_ヽ 　　　　　弋_::ソ,,ﾞ |::::/{^l }　　{　{　　　　]＼＼
　　　 　 　 　 　 　 /く}　　　 　 　ノ::::ｌ　 ,ｘｧ=ミ　　 　 　 　 　 　 　 ::/ ﾉ　八　 ヽ　　　　　　 ＼ヽ
　　　　　　　　　　r{ 　 `7ｰ-r-‐ｧ'７:::厶 ´　　　　　　　　　　　"" ／ 　 ノ　从　　　　　　　　　 ＼
　　　 　 　 　 　 /　 　 /　 /　/　/::::::::ハ　""　 　 ｀　 　 -┐　　 　 厂　　 {:ハ
.　　　　　 　 　 /　 　 　 　 　 　 ｲ::::::::{:l八　　　　　(　　 　 ﾉ　　　 ｲ　　 　 /:::∧　　丶、
　　　　　　　　/　　　　　　　　　 八:::::::、　＼　　 　 　 ｰ‐'　 　 ／{⌒　　　{:::::{::::＼　　　＼
　　　　　　　 ,′ 　　 　　 　／ /　 ＼:::＼＿_≧ｰ-　 .._　　　 '　 /∧ノ^⌒￣＼｣＿＼
.　　　　　 ／′　　ヽ　　 ／　厶ヘ／ ＼ﾄ､　　 　 ￣/}　￣＿／／　　　 　 　 ／　　 ＼
　　　　／　,′　　　　　 　 ／　　　　　　 ＼ r─＜ //V^＞-‐┐　　　　 　 ／　 　 　 　 ヽ
　　　/　　 　 　 　 　 　 ／　　 　 　 l　 　 　 }::.::.::.::.`[_〕::.::.::.::.::/　　　　　／
.　　/　　　　 　 　 　 ／　　 　 　 　 l　　　 _厶-‐::.::7ハ::.::.::.::./　　　　　 　 　 　 　 　 　 八
.　 〈/　　　　　　　　 /　　　　　　　 l　　 く::.::.::.::.::.:::/.::.::..＼:.::{　　　　　　　　　　　　　　　　 ＼
　　 ∨　　　　　　　　　　 　 　 ＿_ |　　　∧:.::.::.:::/.::.::.::.::.::..＼
　　　 ＼　　　　　　 _..　-‐''^~　 　 | 　 　 　 '::.:::/ｌ|.::.::.　-‐'⌒　　　　　　　-‐ｧ￢'⌒　ｰ- 　 __
　　　　　`ｰ--‐ ''^´　　　　　 　 　 |　　　　　 ∨　|／　　　　　　　　　　　　 /　　　　　　　　　 ￣
