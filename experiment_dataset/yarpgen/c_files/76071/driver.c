#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1401445674U;
_Bool var_1 = (_Bool)1;
short var_2 = (short)15328;
int var_3 = 1413731747;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)21;
unsigned long long int var_8 = 7403641144105852020ULL;
int var_12 = 1067838128;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)27722;
int var_15 = 1000675753;
unsigned long long int var_16 = 13177680170380962228ULL;
void init() {
}

void checksum() {
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
