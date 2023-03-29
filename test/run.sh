
betty ../*.c ../*.h;
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 ../*.c *.c && ./a.out

rm a.out;
