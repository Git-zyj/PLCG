#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)42;
unsigned int var_4 = 2799703935U;
_Bool var_5 = (_Bool)1;
short var_9 = (short)-26106;
unsigned short var_10 = (unsigned short)48433;
signed char var_13 = (signed char)-19;
long long int var_14 = 6711626954948422024LL;
unsigned long long int var_15 = 8749109246599839997ULL;
int zero = 0;
long long int var_16 = -4429882648363519833LL;
unsigned long long int var_17 = 18285237462765060658ULL;
unsigned int var_18 = 2115810401U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
