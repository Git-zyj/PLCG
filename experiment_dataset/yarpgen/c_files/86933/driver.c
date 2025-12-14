#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3918715254U;
unsigned long long int var_6 = 9233913162460997344ULL;
unsigned int var_7 = 2262210878U;
unsigned short var_9 = (unsigned short)44945;
int zero = 0;
unsigned int var_12 = 3021423378U;
unsigned int var_13 = 1861377070U;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
