#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)63098;
short var_3 = (short)32128;
short var_11 = (short)10748;
unsigned short var_15 = (unsigned short)57792;
int zero = 0;
signed char var_19 = (signed char)-114;
signed char var_20 = (signed char)-76;
unsigned char var_21 = (unsigned char)71;
short var_22 = (short)5254;
unsigned char var_23 = (unsigned char)140;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
