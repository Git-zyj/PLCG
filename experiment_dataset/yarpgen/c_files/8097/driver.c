#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1018432759;
unsigned long long int var_3 = 16182242775806734584ULL;
short var_4 = (short)32471;
long long int var_5 = -3343983572830088956LL;
unsigned long long int var_6 = 15366052683246144062ULL;
int var_8 = -1474570742;
int zero = 0;
unsigned int var_10 = 2707647009U;
unsigned long long int var_11 = 9452458151076847164ULL;
unsigned int var_12 = 1512783204U;
int var_13 = -558501169;
signed char var_14 = (signed char)114;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
