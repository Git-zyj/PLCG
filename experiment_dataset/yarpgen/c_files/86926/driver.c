#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10191245927502689253ULL;
unsigned short var_16 = (unsigned short)17990;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)55127;
unsigned long long int var_19 = 15334012970335268101ULL;
unsigned short var_20 = (unsigned short)9902;
void init() {
}

void checksum() {
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
