#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6943067811479350516LL;
short var_2 = (short)25911;
int var_4 = 1329502030;
int var_7 = -856829472;
unsigned long long int var_10 = 9410025906437668805ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 7298941657702676023ULL;
unsigned long long int var_21 = 11097838914954935386ULL;
unsigned int var_22 = 824287163U;
unsigned long long int var_23 = 10112799390631372056ULL;
unsigned short var_24 = (unsigned short)9252;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
