#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 5913982203554790845ULL;
short var_15 = (short)24669;
int zero = 0;
unsigned short var_17 = (unsigned short)63928;
unsigned long long int var_18 = 10568618769346069024ULL;
int var_19 = 710741165;
long long int var_20 = 4958607608951865987LL;
unsigned short var_21 = (unsigned short)23013;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
