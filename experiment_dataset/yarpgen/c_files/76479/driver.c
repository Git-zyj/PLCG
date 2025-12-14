#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -350991984;
unsigned int var_8 = 3270983723U;
int var_10 = 1043890677;
int zero = 0;
int var_14 = 942520806;
unsigned int var_15 = 3696767840U;
unsigned short var_16 = (unsigned short)20491;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 4554338897433817185ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
