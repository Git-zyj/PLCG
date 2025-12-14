#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -548517806;
unsigned long long int var_3 = 12157899582376950747ULL;
unsigned int var_4 = 4189944065U;
unsigned short var_5 = (unsigned short)40913;
int var_7 = -996364411;
unsigned long long int var_8 = 9074034356722300767ULL;
unsigned short var_10 = (unsigned short)52794;
int zero = 0;
unsigned short var_11 = (unsigned short)2119;
signed char var_12 = (signed char)88;
unsigned short var_13 = (unsigned short)40968;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
