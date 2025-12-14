#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2066703021;
int var_1 = -784928065;
unsigned long long int var_3 = 10078252462012982659ULL;
int var_4 = 2140212489;
unsigned long long int var_7 = 16193467735017637202ULL;
long long int var_9 = -1884864448856578733LL;
_Bool var_10 = (_Bool)0;
signed char var_13 = (signed char)-60;
unsigned short var_14 = (unsigned short)3081;
short var_15 = (short)-9980;
unsigned char var_16 = (unsigned char)81;
unsigned int var_17 = 4190737622U;
int zero = 0;
long long int var_19 = 4080237639684684536LL;
long long int var_20 = 3116311988806209928LL;
unsigned char var_21 = (unsigned char)102;
unsigned char var_22 = (unsigned char)165;
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
