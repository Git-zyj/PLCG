#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1590701209;
signed char var_3 = (signed char)-90;
unsigned int var_11 = 2945136580U;
unsigned char var_12 = (unsigned char)146;
int zero = 0;
short var_14 = (short)3145;
long long int var_15 = 4340092444614932003LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
