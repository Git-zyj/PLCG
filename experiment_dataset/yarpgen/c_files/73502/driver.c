#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3158514747U;
unsigned long long int var_13 = 213331406872452241ULL;
unsigned short var_15 = (unsigned short)11867;
int zero = 0;
unsigned short var_17 = (unsigned short)40148;
_Bool var_18 = (_Bool)1;
int var_19 = 1501265074;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
