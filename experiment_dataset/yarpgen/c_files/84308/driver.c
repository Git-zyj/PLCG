#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13001914145060471162ULL;
short var_2 = (short)22284;
short var_3 = (short)-11768;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)42575;
unsigned int var_7 = 2138839228U;
signed char var_8 = (signed char)117;
unsigned short var_9 = (unsigned short)8041;
short var_12 = (short)6174;
unsigned short var_16 = (unsigned short)16151;
_Bool var_17 = (_Bool)1;
long long int var_18 = 4687642355780153395LL;
unsigned short var_19 = (unsigned short)34282;
int zero = 0;
long long int var_20 = -3146125580583277124LL;
long long int var_21 = 3106188154967784453LL;
signed char var_22 = (signed char)-7;
unsigned long long int var_23 = 5329598102756530715ULL;
long long int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2223038439959163824LL : -265320873441422367LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
