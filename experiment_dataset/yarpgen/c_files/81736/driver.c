#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)54;
long long int var_3 = -526642681826464871LL;
unsigned int var_4 = 4182420646U;
unsigned int var_5 = 1285751110U;
unsigned long long int var_7 = 4803941399673558742ULL;
unsigned int var_9 = 3803666404U;
int zero = 0;
unsigned short var_10 = (unsigned short)13892;
unsigned long long int var_11 = 6850308316834851336ULL;
unsigned int var_12 = 1057000245U;
long long int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -6963391381072853767LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
