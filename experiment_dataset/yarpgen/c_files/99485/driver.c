#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22121;
unsigned char var_1 = (unsigned char)156;
unsigned char var_4 = (unsigned char)190;
unsigned short var_10 = (unsigned short)57504;
unsigned char var_13 = (unsigned char)181;
int zero = 0;
long long int var_14 = 1385150416620202765LL;
long long int var_15 = 1797870401274251799LL;
short var_16 = (short)12764;
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
