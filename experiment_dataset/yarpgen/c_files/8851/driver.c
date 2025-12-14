#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 475001175;
unsigned int var_6 = 1415548265U;
signed char var_9 = (signed char)-109;
unsigned long long int var_11 = 6242327607930969307ULL;
int var_12 = 1134134151;
int zero = 0;
int var_14 = 675999522;
unsigned short var_15 = (unsigned short)18990;
void init() {
}

void checksum() {
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
