#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2525482839078426309ULL;
unsigned short var_6 = (unsigned short)15105;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)135;
unsigned long long int var_14 = 18413146933881139578ULL;
long long int var_16 = -374602661536831551LL;
unsigned long long int var_19 = 13468339263934648527ULL;
int zero = 0;
unsigned long long int var_20 = 15702052058085841488ULL;
unsigned long long int var_21 = 12130040472927147336ULL;
unsigned char var_22 = (unsigned char)65;
unsigned short var_23 = (unsigned short)64726;
unsigned long long int var_24 = 12435937511237081641ULL;
short var_25 = (short)11679;
unsigned int var_26 = 1249892270U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
