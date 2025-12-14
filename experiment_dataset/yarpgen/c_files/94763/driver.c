#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 667416387;
_Bool var_3 = (_Bool)1;
int var_4 = 1066075781;
unsigned short var_5 = (unsigned short)16908;
long long int var_6 = -1597204040960816402LL;
unsigned long long int var_9 = 10777913249729996231ULL;
long long int var_10 = -7761057709471302336LL;
unsigned int var_11 = 942535917U;
unsigned long long int var_12 = 13677841743423696548ULL;
unsigned long long int var_13 = 18282999175466693778ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = 1884580758;
unsigned short var_18 = (unsigned short)23288;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
