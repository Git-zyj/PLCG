#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)190;
int var_3 = 1055371197;
unsigned short var_5 = (unsigned short)9353;
unsigned int var_7 = 2422076606U;
short var_8 = (short)-29384;
unsigned short var_9 = (unsigned short)33392;
int zero = 0;
unsigned short var_10 = (unsigned short)49442;
unsigned int var_11 = 1851880142U;
short var_12 = (short)-12318;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
