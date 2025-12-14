#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13829;
_Bool var_1 = (_Bool)1;
unsigned int var_3 = 216681876U;
_Bool var_6 = (_Bool)1;
unsigned char var_10 = (unsigned char)66;
long long int var_12 = 8058253482830001259LL;
unsigned int var_13 = 198213071U;
signed char var_15 = (signed char)127;
long long int var_16 = 168877073850645513LL;
unsigned int var_18 = 202952700U;
int zero = 0;
signed char var_19 = (signed char)-87;
unsigned int var_20 = 1070929238U;
long long int var_21 = -4217422007819384802LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
