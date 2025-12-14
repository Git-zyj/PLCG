#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5291587665486640940ULL;
unsigned char var_1 = (unsigned char)239;
_Bool var_2 = (_Bool)1;
short var_3 = (short)9048;
long long int var_4 = 4781249002217855898LL;
long long int var_6 = 2419745827343767524LL;
long long int var_7 = 3622608075374276017LL;
unsigned short var_9 = (unsigned short)38801;
unsigned char var_10 = (unsigned char)246;
int var_11 = -1901696309;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)13925;
long long int var_14 = -8682277895969566845LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
