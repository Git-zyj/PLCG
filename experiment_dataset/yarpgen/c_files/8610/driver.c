#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-1;
int var_3 = 721186284;
signed char var_5 = (signed char)-116;
unsigned short var_6 = (unsigned short)30642;
unsigned int var_10 = 2747501794U;
short var_14 = (short)14542;
int var_17 = -1471935243;
unsigned char var_18 = (unsigned char)198;
int zero = 0;
int var_19 = 820554968;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-5984;
unsigned int var_22 = 2487276938U;
unsigned short var_23 = (unsigned short)22945;
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
