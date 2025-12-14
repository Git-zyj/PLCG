#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1156761542;
short var_3 = (short)-23587;
unsigned short var_6 = (unsigned short)55656;
signed char var_13 = (signed char)80;
unsigned short var_14 = (unsigned short)51315;
int zero = 0;
int var_17 = 1141117854;
signed char var_18 = (signed char)14;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
