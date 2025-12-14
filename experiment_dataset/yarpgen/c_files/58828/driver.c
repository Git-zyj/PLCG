#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-105;
unsigned char var_3 = (unsigned char)71;
int var_14 = -573198693;
int var_15 = 534814183;
int zero = 0;
int var_19 = -1776496479;
unsigned short var_20 = (unsigned short)9893;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
