#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5011810626032762951LL;
unsigned short var_3 = (unsigned short)5047;
_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)29834;
int zero = 0;
signed char var_13 = (signed char)-59;
unsigned int var_14 = 2293367451U;
unsigned char var_15 = (unsigned char)77;
unsigned short var_16 = (unsigned short)55247;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
