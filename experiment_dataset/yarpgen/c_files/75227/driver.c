#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6068;
unsigned int var_5 = 1143304351U;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)64218;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)105;
unsigned short var_12 = (unsigned short)49524;
unsigned long long int var_13 = 9773300177293632642ULL;
unsigned int var_14 = 116013264U;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)52611;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)26354;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
