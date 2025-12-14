#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -397321345;
unsigned int var_6 = 3142220684U;
unsigned long long int var_13 = 10863916699179663458ULL;
int zero = 0;
int var_18 = 1281499577;
unsigned long long int var_19 = 1681677623701467929ULL;
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
