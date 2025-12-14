#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43607;
unsigned short var_3 = (unsigned short)57812;
unsigned long long int var_12 = 16345608190866366988ULL;
unsigned int var_16 = 2290278230U;
unsigned long long int var_18 = 15074438463805036382ULL;
int zero = 0;
int var_20 = 1045062268;
signed char var_21 = (signed char)-38;
void init() {
}

void checksum() {
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
