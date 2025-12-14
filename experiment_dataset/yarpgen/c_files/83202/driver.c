#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5116906614232732490LL;
unsigned long long int var_1 = 9846390650879449218ULL;
signed char var_3 = (signed char)6;
signed char var_4 = (signed char)106;
int var_6 = 828910308;
unsigned short var_8 = (unsigned short)39213;
unsigned char var_10 = (unsigned char)26;
unsigned int var_11 = 1476241430U;
unsigned long long int var_12 = 13859925473421418558ULL;
int zero = 0;
long long int var_15 = 1854184261729053138LL;
long long int var_16 = -5772216100930661412LL;
unsigned int var_17 = 737656172U;
void init() {
}

void checksum() {
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
