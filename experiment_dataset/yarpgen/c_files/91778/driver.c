#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23889;
unsigned long long int var_3 = 7532080052573707490ULL;
short var_6 = (short)6514;
short var_13 = (short)18462;
unsigned char var_14 = (unsigned char)196;
int zero = 0;
unsigned long long int var_19 = 13566078317760354800ULL;
short var_20 = (short)-9302;
unsigned long long int var_21 = 14531497934057767386ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
