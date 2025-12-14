#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-84;
int var_6 = -825617018;
unsigned short var_8 = (unsigned short)41842;
signed char var_10 = (signed char)-71;
int zero = 0;
int var_13 = 662127097;
unsigned short var_14 = (unsigned short)54679;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
