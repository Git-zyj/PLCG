#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)34;
short var_5 = (short)6157;
unsigned long long int var_7 = 13509547896502332049ULL;
unsigned short var_9 = (unsigned short)31208;
unsigned short var_13 = (unsigned short)25992;
int zero = 0;
short var_15 = (short)8107;
unsigned short var_16 = (unsigned short)50044;
void init() {
}

void checksum() {
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
