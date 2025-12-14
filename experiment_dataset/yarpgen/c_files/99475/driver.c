#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41918;
unsigned long long int var_2 = 1182897800719116034ULL;
unsigned long long int var_10 = 8163455013887685567ULL;
int zero = 0;
unsigned int var_16 = 2908288662U;
unsigned short var_17 = (unsigned short)36880;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
