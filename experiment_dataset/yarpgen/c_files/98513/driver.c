#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 971141615680075338ULL;
long long int var_3 = -7578110480667885730LL;
long long int var_4 = -6988573351460870161LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 3101127406077159262ULL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)223;
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
