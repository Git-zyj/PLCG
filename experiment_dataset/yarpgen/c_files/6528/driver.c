#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)139;
unsigned char var_3 = (unsigned char)55;
unsigned long long int var_4 = 15449419950011570408ULL;
unsigned int var_5 = 3651929744U;
int zero = 0;
signed char var_10 = (signed char)44;
unsigned int var_11 = 4016064104U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
