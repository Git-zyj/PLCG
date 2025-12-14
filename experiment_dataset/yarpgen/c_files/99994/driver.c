#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10595417257510466071ULL;
unsigned long long int var_4 = 16150634869884610309ULL;
unsigned char var_7 = (unsigned char)251;
unsigned long long int var_9 = 9763018543699913051ULL;
unsigned short var_13 = (unsigned short)33129;
unsigned long long int var_14 = 5677466244511563417ULL;
_Bool var_15 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_19 = 519402015;
long long int var_20 = 4588690028968739444LL;
unsigned short var_21 = (unsigned short)42432;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
