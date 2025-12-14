#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1270374321U;
long long int var_2 = -246641998610933899LL;
unsigned int var_3 = 3859028090U;
unsigned int var_4 = 3133238652U;
unsigned int var_5 = 2153404438U;
unsigned long long int var_6 = 5843046300353194335ULL;
unsigned int var_7 = 1138948196U;
short var_8 = (short)1563;
short var_11 = (short)-9513;
short var_12 = (short)13536;
long long int var_13 = 5073076014907624514LL;
int zero = 0;
unsigned int var_14 = 187852612U;
long long int var_15 = -733972949275736044LL;
unsigned int var_16 = 1608827244U;
unsigned long long int var_17 = 16690103702812458563ULL;
long long int var_18 = 5119590049732237232LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
