#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2232;
short var_2 = (short)31712;
_Bool var_3 = (_Bool)0;
int var_7 = 362096129;
signed char var_9 = (signed char)-5;
int zero = 0;
unsigned char var_14 = (unsigned char)66;
unsigned long long int var_15 = 5184530305993640796ULL;
unsigned short var_16 = (unsigned short)40891;
unsigned int var_17 = 3724258862U;
void init() {
}

void checksum() {
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
