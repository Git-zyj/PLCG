#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4012760846U;
unsigned char var_5 = (unsigned char)18;
unsigned long long int var_7 = 11400192064971674101ULL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)107;
unsigned short var_12 = (unsigned short)47584;
int zero = 0;
unsigned int var_13 = 475181508U;
short var_14 = (short)3009;
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
