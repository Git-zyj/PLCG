#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)53660;
unsigned long long int var_4 = 10454119198308246616ULL;
int var_7 = -402160514;
_Bool var_8 = (_Bool)1;
unsigned short var_15 = (unsigned short)59687;
int zero = 0;
unsigned int var_16 = 3272488421U;
unsigned int var_17 = 3913672379U;
int var_18 = 2111818455;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
