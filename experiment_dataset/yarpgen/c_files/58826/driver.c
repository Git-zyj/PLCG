#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)47;
unsigned int var_1 = 2260233030U;
short var_2 = (short)-11862;
signed char var_3 = (signed char)-112;
unsigned long long int var_6 = 10663302607580455263ULL;
unsigned long long int var_7 = 8959788122251711893ULL;
short var_8 = (short)13859;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)102;
short var_11 = (short)8200;
int zero = 0;
unsigned short var_13 = (unsigned short)5211;
short var_14 = (short)-1712;
short var_15 = (short)-3809;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
