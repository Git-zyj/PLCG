#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)8941;
int var_4 = 2041069424;
long long int var_6 = -979405659391077657LL;
unsigned long long int var_7 = 2737915084268074433ULL;
unsigned int var_8 = 3269669093U;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)195;
unsigned int var_14 = 3535572586U;
unsigned int var_17 = 1883982881U;
int var_18 = 248512470;
int var_19 = -1393190518;
int zero = 0;
unsigned char var_20 = (unsigned char)39;
unsigned long long int var_21 = 13880676734623671072ULL;
void init() {
}

void checksum() {
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
