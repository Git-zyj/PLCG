#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-74;
short var_8 = (short)30149;
long long int var_9 = 4491053078980542767LL;
short var_13 = (short)7204;
int zero = 0;
signed char var_14 = (signed char)-60;
unsigned char var_15 = (unsigned char)58;
unsigned short var_16 = (unsigned short)55615;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
