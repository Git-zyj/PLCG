#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-80;
_Bool var_4 = (_Bool)1;
unsigned long long int var_9 = 13502989805917982068ULL;
unsigned short var_16 = (unsigned short)43790;
int zero = 0;
unsigned long long int var_17 = 9629008512729928941ULL;
unsigned long long int var_18 = 5724898159053971439ULL;
void init() {
}

void checksum() {
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
