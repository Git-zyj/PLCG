#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-63;
unsigned char var_8 = (unsigned char)63;
short var_10 = (short)20377;
int zero = 0;
int var_11 = 272110331;
short var_12 = (short)-2512;
unsigned long long int var_13 = 3858039192081625800ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
