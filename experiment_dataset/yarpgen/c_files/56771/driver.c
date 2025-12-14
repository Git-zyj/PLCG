#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)100;
unsigned short var_2 = (unsigned short)5831;
unsigned short var_3 = (unsigned short)47837;
signed char var_4 = (signed char)94;
long long int var_5 = -3782277312360476798LL;
unsigned short var_6 = (unsigned short)13017;
int var_8 = -2051768729;
signed char var_9 = (signed char)-70;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-14424;
unsigned long long int var_13 = 10044206653083537938ULL;
int zero = 0;
signed char var_14 = (signed char)-104;
short var_15 = (short)-3415;
unsigned short var_16 = (unsigned short)20702;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
