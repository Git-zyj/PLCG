#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8616687641500227484LL;
unsigned long long int var_4 = 4365186572273644207ULL;
unsigned long long int var_6 = 9720513592290770493ULL;
unsigned char var_7 = (unsigned char)135;
_Bool var_12 = (_Bool)1;
unsigned int var_18 = 3539995750U;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 2020078594497787496LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
