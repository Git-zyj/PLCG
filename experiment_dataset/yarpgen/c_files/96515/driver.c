#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)(-127 - 1);
unsigned long long int var_5 = 12405800409551749508ULL;
short var_6 = (short)-10203;
int var_8 = 1367481871;
unsigned char var_10 = (unsigned char)202;
int zero = 0;
short var_13 = (short)11939;
unsigned int var_14 = 2761916161U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
