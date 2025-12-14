#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)76;
signed char var_8 = (signed char)-57;
long long int var_12 = -2866055039570411902LL;
unsigned char var_13 = (unsigned char)33;
int zero = 0;
signed char var_14 = (signed char)-38;
unsigned short var_15 = (unsigned short)19659;
signed char var_16 = (signed char)122;
signed char var_17 = (signed char)90;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
