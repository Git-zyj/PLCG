#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9486219040060225598ULL;
unsigned short var_8 = (unsigned short)11307;
short var_9 = (short)30518;
int var_11 = 1112513359;
signed char var_13 = (signed char)-79;
signed char var_17 = (signed char)-34;
int zero = 0;
long long int var_19 = 5554591334958786224LL;
unsigned long long int var_20 = 6342430648185212669ULL;
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
