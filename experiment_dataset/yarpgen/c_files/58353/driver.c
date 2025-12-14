#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)50;
unsigned long long int var_2 = 2651827539022437032ULL;
unsigned long long int var_3 = 18150345730723798751ULL;
signed char var_4 = (signed char)-13;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 1318497089U;
signed char var_8 = (signed char)80;
long long int var_9 = 5227654871737958571LL;
unsigned short var_10 = (unsigned short)40036;
int zero = 0;
int var_11 = -1883104379;
_Bool var_12 = (_Bool)0;
long long int var_13 = -195546157819777790LL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)52;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
