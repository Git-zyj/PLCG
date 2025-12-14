#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 79835081597161268LL;
unsigned long long int var_3 = 10086602193190154887ULL;
int var_4 = 1265473736;
unsigned long long int var_5 = 17204256854082600201ULL;
int var_6 = -1604458722;
unsigned int var_8 = 3863226552U;
unsigned char var_9 = (unsigned char)175;
unsigned int var_11 = 787189426U;
unsigned int var_12 = 3841727054U;
unsigned int var_14 = 2350378340U;
int var_15 = 452760448;
unsigned int var_16 = 3845320340U;
unsigned long long int var_17 = 17568166098495828226ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)196;
unsigned long long int var_20 = 13698560420404550393ULL;
void init() {
}

void checksum() {
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
