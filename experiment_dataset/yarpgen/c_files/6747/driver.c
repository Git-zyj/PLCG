#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3940722966U;
unsigned char var_2 = (unsigned char)8;
unsigned long long int var_6 = 16184686626561165095ULL;
unsigned int var_7 = 1585522365U;
unsigned int var_9 = 101864664U;
int zero = 0;
unsigned int var_12 = 405989257U;
unsigned char var_13 = (unsigned char)143;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
