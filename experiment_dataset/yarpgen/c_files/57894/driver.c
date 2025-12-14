#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1301;
signed char var_1 = (signed char)-35;
_Bool var_2 = (_Bool)1;
short var_4 = (short)11019;
signed char var_6 = (signed char)126;
unsigned short var_7 = (unsigned short)47608;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 7330489964424318044ULL;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 1317636617U;
int zero = 0;
int var_19 = 821724529;
unsigned long long int var_20 = 4736174457160429529ULL;
unsigned short var_21 = (unsigned short)59801;
void init() {
}

void checksum() {
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
