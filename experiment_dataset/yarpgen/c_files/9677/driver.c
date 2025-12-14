#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10837847738083542427ULL;
short var_3 = (short)12230;
long long int var_4 = 7505354004610914899LL;
short var_6 = (short)-26762;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 7452188966529181335ULL;
signed char var_10 = (signed char)-23;
int zero = 0;
short var_12 = (short)9463;
long long int var_13 = 8564319889973295602LL;
short var_14 = (short)-23681;
_Bool var_15 = (_Bool)1;
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
