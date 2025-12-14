#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5118491699305813082LL;
unsigned long long int var_4 = 18369744040821334474ULL;
unsigned int var_10 = 653420511U;
long long int var_11 = 3031526337399151819LL;
unsigned short var_14 = (unsigned short)22398;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 4130501946U;
int var_18 = -937458121;
unsigned char var_19 = (unsigned char)250;
long long int var_20 = 3751828913669002417LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
