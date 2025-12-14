#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9548;
unsigned long long int var_1 = 14795941087164999726ULL;
unsigned long long int var_3 = 2075739252231715769ULL;
int var_4 = -1285739704;
unsigned int var_5 = 1925273046U;
unsigned long long int var_6 = 10307853443090670894ULL;
unsigned int var_7 = 3488971853U;
long long int var_8 = -6052428982244095517LL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 12509295990836980743ULL;
short var_12 = (short)8709;
int var_14 = 2029776877;
int zero = 0;
unsigned long long int var_16 = 6618439597507456660ULL;
unsigned int var_17 = 3082779308U;
unsigned int var_18 = 3727039981U;
short var_19 = (short)-20735;
unsigned long long int var_20 = 17405832670434795863ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
