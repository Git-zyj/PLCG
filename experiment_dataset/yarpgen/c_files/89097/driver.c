#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7001648093239618595LL;
unsigned long long int var_2 = 9071091539991516192ULL;
short var_8 = (short)-20707;
short var_11 = (short)-27634;
int zero = 0;
short var_20 = (short)-10720;
unsigned long long int var_21 = 2379414250029031211ULL;
unsigned short var_22 = (unsigned short)23654;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
