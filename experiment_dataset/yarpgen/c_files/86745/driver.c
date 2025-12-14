#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8225835828788382433ULL;
unsigned int var_7 = 4283990675U;
int var_10 = -1824593070;
int var_17 = 88729906;
int zero = 0;
unsigned int var_18 = 3468694641U;
unsigned short var_19 = (unsigned short)38129;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
