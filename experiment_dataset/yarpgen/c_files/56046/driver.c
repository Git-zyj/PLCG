#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)35473;
signed char var_7 = (signed char)83;
unsigned char var_8 = (unsigned char)133;
int var_14 = 960579846;
int zero = 0;
long long int var_19 = 2245906151566638115LL;
signed char var_20 = (signed char)-119;
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
