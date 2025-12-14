#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3839419457U;
signed char var_2 = (signed char)71;
unsigned long long int var_5 = 2053420027857447258ULL;
signed char var_7 = (signed char)-69;
long long int var_12 = 6677642431504753043LL;
int zero = 0;
unsigned long long int var_15 = 17764678963300596442ULL;
unsigned char var_16 = (unsigned char)14;
void init() {
}

void checksum() {
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
