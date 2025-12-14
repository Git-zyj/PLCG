#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 8219262772608210660ULL;
unsigned long long int var_5 = 15282259790498076948ULL;
long long int var_7 = 760345247810149083LL;
signed char var_9 = (signed char)-57;
unsigned char var_10 = (unsigned char)72;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-58;
_Bool var_13 = (_Bool)0;
long long int var_15 = -203551010239246674LL;
int var_16 = -2006091830;
unsigned long long int var_17 = 6044807055961694433ULL;
unsigned int var_18 = 394338702U;
int zero = 0;
unsigned char var_19 = (unsigned char)182;
long long int var_20 = -2177006334604078919LL;
unsigned int var_21 = 152373150U;
unsigned char var_22 = (unsigned char)90;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
