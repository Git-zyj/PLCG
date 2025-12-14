#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5518600195197711487LL;
unsigned int var_3 = 2768825651U;
short var_7 = (short)9390;
unsigned char var_8 = (unsigned char)155;
unsigned long long int var_9 = 17834396956568030083ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)16203;
unsigned int var_20 = 721879869U;
int var_21 = 934393697;
void init() {
}

void checksum() {
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
