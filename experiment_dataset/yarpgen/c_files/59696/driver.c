#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 192618518;
int var_5 = 1236112426;
unsigned long long int var_6 = 3293374563088099254ULL;
unsigned int var_9 = 1985634536U;
unsigned short var_16 = (unsigned short)46945;
int zero = 0;
unsigned char var_19 = (unsigned char)245;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-8224;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
