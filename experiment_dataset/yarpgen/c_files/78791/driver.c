#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-52;
signed char var_2 = (signed char)70;
unsigned char var_4 = (unsigned char)103;
short var_7 = (short)-18680;
unsigned char var_8 = (unsigned char)119;
short var_9 = (short)30980;
long long int var_11 = -7945913895078461405LL;
int zero = 0;
unsigned char var_12 = (unsigned char)31;
unsigned char var_13 = (unsigned char)67;
void init() {
}

void checksum() {
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
