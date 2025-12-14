#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2299838949U;
short var_4 = (short)-1936;
unsigned short var_5 = (unsigned short)8005;
int var_6 = -1751997783;
unsigned long long int var_9 = 15405179879156152172ULL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3646561199U;
unsigned char var_16 = (unsigned char)5;
int zero = 0;
long long int var_17 = -7215419975878986023LL;
unsigned char var_18 = (unsigned char)231;
unsigned short var_19 = (unsigned short)32635;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
