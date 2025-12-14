#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)51903;
signed char var_11 = (signed char)-45;
_Bool var_12 = (_Bool)1;
unsigned char var_14 = (unsigned char)0;
int zero = 0;
short var_15 = (short)5554;
int var_16 = 1150028278;
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
