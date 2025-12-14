#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3674342524519484525ULL;
signed char var_4 = (signed char)71;
signed char var_5 = (signed char)-52;
short var_7 = (short)-15791;
unsigned short var_8 = (unsigned short)14567;
int zero = 0;
unsigned short var_13 = (unsigned short)34864;
unsigned short var_14 = (unsigned short)1293;
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
