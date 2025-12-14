#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)227;
short var_3 = (short)-18894;
signed char var_5 = (signed char)-112;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 89200370U;
signed char var_14 = (signed char)81;
int zero = 0;
signed char var_15 = (signed char)-37;
long long int var_16 = 8571276605765093040LL;
unsigned short var_17 = (unsigned short)37907;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
