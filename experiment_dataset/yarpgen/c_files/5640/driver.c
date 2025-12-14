#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 69379223U;
int var_5 = -1572280600;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)175;
long long int var_12 = -1023172727953232739LL;
long long int var_13 = -7784783237010231107LL;
long long int var_15 = 6870155570154714395LL;
_Bool var_17 = (_Bool)0;
long long int var_18 = 1255590151216325020LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = 897504877;
_Bool var_21 = (_Bool)0;
int var_22 = -1727163081;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
