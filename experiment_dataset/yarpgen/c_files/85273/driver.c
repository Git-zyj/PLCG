#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 896492378025866622ULL;
unsigned long long int var_1 = 17480114179494563996ULL;
long long int var_3 = -2288754759025063506LL;
short var_4 = (short)1938;
unsigned short var_5 = (unsigned short)20551;
unsigned long long int var_6 = 1499838923995820705ULL;
signed char var_8 = (signed char)-14;
unsigned char var_9 = (unsigned char)188;
unsigned char var_10 = (unsigned char)194;
unsigned int var_11 = 648139909U;
int zero = 0;
int var_12 = -2099753198;
long long int var_13 = 2093284786214416450LL;
int var_14 = -1002781761;
unsigned int var_15 = 1743740538U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
