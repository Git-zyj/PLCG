#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -186925000590964830LL;
_Bool var_3 = (_Bool)0;
unsigned char var_7 = (unsigned char)184;
unsigned int var_9 = 2180238292U;
long long int var_10 = 8669715303452104231LL;
long long int var_11 = -8525932820515260710LL;
long long int var_13 = 4229669587402161025LL;
long long int var_14 = -1623121439013554260LL;
int zero = 0;
unsigned int var_19 = 3396268253U;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2214552191U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
