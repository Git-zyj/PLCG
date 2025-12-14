#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14031;
unsigned int var_1 = 1384779706U;
_Bool var_2 = (_Bool)1;
signed char var_7 = (signed char)29;
unsigned short var_8 = (unsigned short)35962;
short var_9 = (short)-18909;
unsigned char var_11 = (unsigned char)192;
unsigned char var_12 = (unsigned char)82;
int zero = 0;
unsigned char var_13 = (unsigned char)169;
unsigned int var_14 = 924296750U;
unsigned char var_15 = (unsigned char)7;
unsigned long long int var_16 = 3754894844424129061ULL;
long long int var_17 = -6333637090003170817LL;
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
