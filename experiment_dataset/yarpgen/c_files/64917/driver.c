#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)57555;
unsigned int var_5 = 54287345U;
unsigned short var_6 = (unsigned short)16828;
unsigned long long int var_10 = 6693387262762260862ULL;
int zero = 0;
signed char var_13 = (signed char)-121;
unsigned long long int var_14 = 6813118769594461644ULL;
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
