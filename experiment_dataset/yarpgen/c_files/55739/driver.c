#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3095865853U;
long long int var_1 = 4787126423254874731LL;
unsigned char var_2 = (unsigned char)239;
unsigned int var_3 = 147656743U;
unsigned long long int var_4 = 11232294583113634872ULL;
unsigned int var_6 = 4036149577U;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)58205;
int zero = 0;
signed char var_13 = (signed char)114;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)51245;
unsigned long long int var_16 = 17394281955988050698ULL;
unsigned short var_17 = (unsigned short)3450;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
