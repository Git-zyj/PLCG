#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14350938075930735270ULL;
unsigned long long int var_3 = 15452196823555740716ULL;
unsigned char var_4 = (unsigned char)41;
short var_9 = (short)7132;
unsigned int var_14 = 498202435U;
unsigned int var_18 = 1429768085U;
int zero = 0;
short var_19 = (short)-19984;
int var_20 = 87830664;
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
