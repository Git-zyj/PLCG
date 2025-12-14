#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1346707864;
unsigned short var_2 = (unsigned short)44975;
short var_3 = (short)6387;
short var_5 = (short)-15587;
short var_10 = (short)-17877;
unsigned long long int var_11 = 15164624298131399164ULL;
unsigned short var_13 = (unsigned short)57360;
int zero = 0;
int var_17 = -829669473;
short var_18 = (short)-11028;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
