#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -335769799623382013LL;
unsigned char var_7 = (unsigned char)59;
int var_8 = 1635937166;
int zero = 0;
unsigned short var_13 = (unsigned short)42100;
short var_14 = (short)14470;
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
