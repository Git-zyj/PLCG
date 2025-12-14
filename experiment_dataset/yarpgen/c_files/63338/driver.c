#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1709140125;
unsigned long long int var_1 = 5471007749030877167ULL;
unsigned long long int var_4 = 4329674924100661170ULL;
long long int var_6 = 512911623831898407LL;
short var_8 = (short)1183;
unsigned int var_9 = 405898017U;
short var_11 = (short)9564;
int var_12 = -2053476162;
int zero = 0;
int var_16 = -887693832;
unsigned long long int var_17 = 5233339719802027598ULL;
signed char var_18 = (signed char)-1;
signed char var_19 = (signed char)-42;
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
