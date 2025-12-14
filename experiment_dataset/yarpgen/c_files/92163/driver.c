#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 947035775U;
unsigned int var_5 = 2218717537U;
short var_6 = (short)4191;
unsigned short var_7 = (unsigned short)10927;
_Bool var_10 = (_Bool)0;
long long int var_12 = -7703301458017123504LL;
long long int var_13 = 4443045726104446171LL;
signed char var_18 = (signed char)-102;
unsigned int var_19 = 3281041836U;
int zero = 0;
short var_20 = (short)-20385;
unsigned int var_21 = 3930960346U;
void init() {
}

void checksum() {
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
