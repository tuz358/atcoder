# AtCoder
archiving problems solved and some tools.

## Tools

### downloader.py
download sample cases automatically.

#### Usage
```
$ python3 ./downloader.py contest_name level
```

#### Example
```
$ python3 ./downloader.py abc001 A
$ ls
in_1.txt	in_3.txt	out_2.txt
in_2.txt	out_1.txt	out_3.txt
```

#### Requirements
- requests
- BeautifulSoup4

### test.py
test sample cases and copy your code to clipboard.

#### Usage
```
$ ./test.py target_file
```

#### Example
```
$ g++ ./a.cpp
$ ./test.py ./a.out
[*] 3 test cases found.
-----------------------
./in_1.txt      ... AC
./in_2.txt      ... AC
./in_3.txt      ... AC
-----------------------
[+] test passed.
```

#### Requirements
- pyperclip
