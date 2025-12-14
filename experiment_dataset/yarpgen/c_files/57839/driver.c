#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)23;
unsigned short var_4 = (unsigned short)3955;
short var_5 = (short)7069;
unsigned long long int var_7 = 8214515230979776875ULL;
unsigned short var_13 = (unsigned short)21470;
unsigned long long int var_18 = 7725526717961598933ULL;
int zero = 0;
short var_20 = (short)10652;
short var_21 = (short)-4025;
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
