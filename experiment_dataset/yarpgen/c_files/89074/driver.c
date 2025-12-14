#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-49;
short var_1 = (short)22209;
signed char var_2 = (signed char)-25;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)174;
int var_14 = 693143119;
int zero = 0;
int var_18 = -20085725;
unsigned char var_19 = (unsigned char)19;
_Bool var_20 = (_Bool)1;
long long int var_21 = -4851285188840815285LL;
unsigned char var_22 = (unsigned char)131;
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
