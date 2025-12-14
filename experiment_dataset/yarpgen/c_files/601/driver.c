#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26695;
unsigned long long int var_2 = 15614921360748728490ULL;
unsigned long long int var_5 = 10632236717637411633ULL;
unsigned long long int var_6 = 11855458754949779363ULL;
long long int var_7 = 1329939764769931158LL;
long long int var_8 = 2913791898805030891LL;
int zero = 0;
unsigned long long int var_10 = 8754508147487159903ULL;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)60505;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
