#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 177402470;
_Bool var_10 = (_Bool)1;
unsigned short var_15 = (unsigned short)63177;
int zero = 0;
unsigned int var_17 = 1401506795U;
short var_18 = (short)-11654;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2361958439U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
