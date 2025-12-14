#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8173158301459175932LL;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)52810;
unsigned short var_6 = (unsigned short)41756;
unsigned short var_7 = (unsigned short)3179;
signed char var_8 = (signed char)-34;
unsigned int var_10 = 1236523889U;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)12071;
unsigned long long int var_16 = 5487740462141409431ULL;
unsigned short var_17 = (unsigned short)25928;
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
