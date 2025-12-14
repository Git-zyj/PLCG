#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)207;
short var_1 = (short)26949;
short var_3 = (short)-15743;
unsigned char var_8 = (unsigned char)39;
int zero = 0;
short var_10 = (short)17429;
signed char var_11 = (signed char)46;
unsigned short var_12 = (unsigned short)38002;
unsigned short var_13 = (unsigned short)21988;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
