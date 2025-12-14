#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)5176;
signed char var_5 = (signed char)60;
unsigned short var_6 = (unsigned short)35818;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 224854713U;
unsigned int var_11 = 4282985124U;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_15 = 1982181864;
unsigned short var_16 = (unsigned short)28717;
unsigned int var_17 = 1172710493U;
unsigned int var_18 = 3128733620U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
