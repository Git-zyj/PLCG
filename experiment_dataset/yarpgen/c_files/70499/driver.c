#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -141765325;
signed char var_2 = (signed char)-1;
long long int var_3 = 1582055046499122487LL;
int var_4 = -2077371998;
short var_5 = (short)-8409;
signed char var_7 = (signed char)-42;
long long int var_8 = -9045901161307115117LL;
unsigned long long int var_10 = 1576760814817547547ULL;
unsigned long long int var_11 = 5103127582269231784ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)69;
long long int var_15 = -308328485966206859LL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1526438898U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
