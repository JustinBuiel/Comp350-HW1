gcc -o helloworld helloworld.c
./helloworld
gcc -o sumInt sumInt.c
./sumInt
gcc -o sumIntVoid sumIntVoid.c
./sumIntVoid
gcc -o sumIntTerm sumIntTerm.c
./sumIntTerm 3
ENV_X=3
export ENV_X
./sumIntTerm $ENV_X
gcc -o numToLetters numToLetters.c
./numToLetters
