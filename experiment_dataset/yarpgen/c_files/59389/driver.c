#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5772624407953991487LL;
unsigned short var_5 = (unsigned short)5654;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 14794428750057432169ULL;
unsigned long long int var_11 = 6326658159695338192ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
