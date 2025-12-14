#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)26374;
unsigned long long int var_2 = 5818629362810904370ULL;
_Bool var_3 = (_Bool)1;
int var_5 = 142514358;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 2010613559547202145ULL;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)9411;
unsigned long long int var_12 = 9362253984027616089ULL;
unsigned char var_13 = (unsigned char)67;
unsigned char var_14 = (unsigned char)64;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 452817382U;
int zero = 0;
signed char var_18 = (signed char)-41;
unsigned int var_19 = 3145369305U;
_Bool var_20 = (_Bool)0;
long long int var_21 = 6350532031096803548LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
