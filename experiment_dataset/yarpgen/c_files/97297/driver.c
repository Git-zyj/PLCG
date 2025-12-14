#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)240;
_Bool var_1 = (_Bool)0;
unsigned char var_4 = (unsigned char)6;
long long int var_10 = -6122661930936537121LL;
int zero = 0;
unsigned long long int var_18 = 15476693818281978290ULL;
long long int var_19 = -4666525913303132263LL;
short var_20 = (short)21948;
_Bool var_21 = (_Bool)0;
signed char arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)104;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
