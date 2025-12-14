#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30982;
unsigned int var_2 = 3040076670U;
unsigned short var_3 = (unsigned short)24865;
int var_4 = -1880918024;
unsigned long long int var_8 = 7559553734973068195ULL;
unsigned int var_9 = 1761012832U;
int zero = 0;
short var_10 = (short)-28044;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
