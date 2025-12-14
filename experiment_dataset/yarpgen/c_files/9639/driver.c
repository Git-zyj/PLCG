#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3765708922671781375ULL;
int var_9 = -891110383;
_Bool var_11 = (_Bool)0;
long long int var_13 = 7497941528150454482LL;
int zero = 0;
short var_14 = (short)12458;
_Bool var_15 = (_Bool)1;
int var_16 = 1304005635;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
