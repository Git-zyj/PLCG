#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2220861139U;
unsigned long long int var_9 = 9719039989267396019ULL;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)94;
unsigned short var_14 = (unsigned short)31377;
int zero = 0;
short var_15 = (short)15626;
unsigned short var_16 = (unsigned short)50222;
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
