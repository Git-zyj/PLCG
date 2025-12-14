#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1336810144;
_Bool var_2 = (_Bool)1;
short var_4 = (short)24121;
_Bool var_6 = (_Bool)0;
short var_9 = (short)25898;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_13 = (short)-26706;
_Bool var_14 = (_Bool)0;
short var_15 = (short)25593;
short var_16 = (short)31542;
short var_17 = (short)14595;
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
