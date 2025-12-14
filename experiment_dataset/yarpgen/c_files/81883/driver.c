#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)137;
long long int var_2 = -4012020726226196725LL;
unsigned int var_5 = 267269283U;
unsigned int var_7 = 3516933226U;
_Bool var_8 = (_Bool)0;
long long int var_10 = 7754198579895190807LL;
int var_12 = -432033240;
int zero = 0;
short var_13 = (short)146;
long long int var_14 = -4408437469441396766LL;
signed char var_15 = (signed char)104;
unsigned short var_16 = (unsigned short)40726;
unsigned char arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)159;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
