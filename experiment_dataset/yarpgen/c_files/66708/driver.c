#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22300;
short var_2 = (short)25194;
unsigned int var_3 = 879348484U;
unsigned long long int var_4 = 8031347075901968405ULL;
unsigned char var_6 = (unsigned char)19;
unsigned char var_14 = (unsigned char)229;
unsigned char var_16 = (unsigned char)211;
long long int var_17 = -4156190856246125871LL;
int zero = 0;
signed char var_18 = (signed char)-25;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2306023046U;
long long int var_21 = 6470492244412084718LL;
unsigned long long int var_22 = 14670522001876325364ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
