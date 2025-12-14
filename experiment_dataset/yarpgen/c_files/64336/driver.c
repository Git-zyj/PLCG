#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13671;
_Bool var_2 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)48309;
long long int var_16 = -5909402611722875903LL;
int var_17 = 7768641;
int zero = 0;
unsigned char var_18 = (unsigned char)95;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 15059039505445879080ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
