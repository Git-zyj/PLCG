#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-102;
int var_4 = -281931459;
unsigned short var_5 = (unsigned short)58494;
unsigned short var_7 = (unsigned short)10284;
signed char var_8 = (signed char)6;
_Bool var_12 = (_Bool)0;
long long int var_13 = 2591714116503925636LL;
int zero = 0;
unsigned int var_15 = 333060262U;
signed char var_16 = (signed char)-90;
int var_17 = -949948192;
long long int var_18 = -6609160581622304781LL;
unsigned int var_19 = 2387318782U;
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
