#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)181;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-23775;
signed char var_3 = (signed char)-57;
unsigned long long int var_5 = 14320863047804544883ULL;
_Bool var_6 = (_Bool)1;
long long int var_7 = -1915034446626829624LL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2403742108U;
short var_11 = (short)20650;
short var_13 = (short)28103;
signed char var_15 = (signed char)66;
int zero = 0;
short var_17 = (short)1596;
int var_18 = 262282866;
signed char var_19 = (signed char)121;
void init() {
}

void checksum() {
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
