#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7889;
unsigned long long int var_4 = 1035687153693308070ULL;
unsigned int var_6 = 836260474U;
short var_8 = (short)-24563;
long long int var_10 = -5936237140964225840LL;
unsigned int var_11 = 2190351587U;
unsigned char var_12 = (unsigned char)214;
long long int var_13 = -2433919481562588701LL;
int zero = 0;
short var_18 = (short)5954;
signed char var_19 = (signed char)86;
unsigned long long int var_20 = 10319890459155672042ULL;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-35;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
