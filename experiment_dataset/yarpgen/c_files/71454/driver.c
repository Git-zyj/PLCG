#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3451064199560151703ULL;
unsigned short var_4 = (unsigned short)57008;
unsigned long long int var_10 = 13791934075781274271ULL;
long long int var_13 = 9120459677648086664LL;
int zero = 0;
unsigned int var_16 = 3248113083U;
long long int var_17 = -25359340313472397LL;
long long int var_18 = 3060892022063142826LL;
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
