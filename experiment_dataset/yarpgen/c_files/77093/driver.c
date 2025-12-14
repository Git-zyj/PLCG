#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 726577931U;
signed char var_2 = (signed char)84;
short var_3 = (short)-12573;
signed char var_6 = (signed char)-11;
unsigned short var_7 = (unsigned short)19675;
short var_8 = (short)23981;
unsigned short var_11 = (unsigned short)51770;
short var_13 = (short)1429;
int zero = 0;
int var_16 = -399081545;
unsigned int var_17 = 3031463886U;
signed char var_18 = (signed char)83;
signed char var_19 = (signed char)-80;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
