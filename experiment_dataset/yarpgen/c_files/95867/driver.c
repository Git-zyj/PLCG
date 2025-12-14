#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)58450;
unsigned char var_11 = (unsigned char)39;
signed char var_13 = (signed char)123;
signed char var_15 = (signed char)38;
int zero = 0;
int var_18 = -125314084;
int var_19 = -760229941;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
