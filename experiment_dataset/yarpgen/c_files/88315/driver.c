#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)35;
unsigned int var_5 = 2476536513U;
long long int var_6 = 3122259161695338409LL;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)1;
_Bool var_14 = (_Bool)1;
short var_15 = (short)30926;
int zero = 0;
short var_16 = (short)-31186;
signed char var_17 = (signed char)-77;
signed char var_18 = (signed char)18;
long long int var_19 = -8135028964154546631LL;
unsigned char var_20 = (unsigned char)106;
unsigned char var_21 = (unsigned char)146;
unsigned long long int var_22 = 4450422375880633030ULL;
unsigned long long int var_23 = 16757377709925477280ULL;
short var_24 = (short)12138;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
