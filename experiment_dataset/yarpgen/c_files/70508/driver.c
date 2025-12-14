#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1263781815636742618ULL;
short var_4 = (short)26322;
long long int var_5 = 8922147505502773647LL;
unsigned long long int var_10 = 18272285241048431689ULL;
int zero = 0;
unsigned long long int var_12 = 15659895069662538848ULL;
unsigned long long int var_13 = 17449100427005233099ULL;
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
