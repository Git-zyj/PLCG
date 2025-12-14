#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19116;
int var_3 = 65680757;
unsigned long long int var_4 = 3177420735222237694ULL;
unsigned long long int var_5 = 17836643787475380380ULL;
signed char var_6 = (signed char)-55;
int zero = 0;
unsigned short var_16 = (unsigned short)8783;
int var_17 = 1536662033;
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
