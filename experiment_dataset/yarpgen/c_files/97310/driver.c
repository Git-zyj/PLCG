#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 294738456888112318ULL;
short var_1 = (short)25978;
short var_5 = (short)-32340;
_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)63684;
unsigned long long int var_10 = 10268065679527537980ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 12293786004993913755ULL;
unsigned long long int var_13 = 8084757254866658956ULL;
_Bool var_14 = (_Bool)1;
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
