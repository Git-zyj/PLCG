#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2572388251U;
unsigned char var_1 = (unsigned char)203;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 393555271U;
short var_5 = (short)-29561;
short var_7 = (short)24933;
short var_8 = (short)15694;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 11386905733154607310ULL;
short var_12 = (short)3696;
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
