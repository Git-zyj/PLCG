#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 747340188;
signed char var_3 = (signed char)-59;
unsigned short var_8 = (unsigned short)61840;
unsigned long long int var_13 = 3911579632300962369ULL;
unsigned char var_16 = (unsigned char)103;
unsigned int var_17 = 3014546665U;
int zero = 0;
signed char var_20 = (signed char)90;
unsigned short var_21 = (unsigned short)16556;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
