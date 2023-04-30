lex lexer.l
bison -dy parser.y
cc y.tab.c -ll 
./a.out < input.txt
python3 CodeOptimizer.py
python3 Assembly_Code_Gen.py 