#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)11484;
unsigned long long int var_12 = 16957246690520423305ULL;
int zero = 0;
unsigned long long int var_13 = 18215338195369010245ULL;
unsigned int var_14 = 3421074135U;
unsigned int var_15 = 3229869122U;
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
