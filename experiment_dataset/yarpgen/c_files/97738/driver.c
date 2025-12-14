#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2098103724799796797LL;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)175;
unsigned int var_5 = 3996911686U;
long long int var_8 = -4500447164576274516LL;
short var_9 = (short)289;
unsigned char var_10 = (unsigned char)139;
long long int var_13 = -6271507677456640783LL;
unsigned short var_14 = (unsigned short)27955;
unsigned short var_15 = (unsigned short)39783;
long long int var_16 = 6386345877254639458LL;
long long int var_18 = 6669038323561536660LL;
int zero = 0;
long long int var_19 = 481007496417642515LL;
signed char var_20 = (signed char)-20;
unsigned int var_21 = 424379362U;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)47568;
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
