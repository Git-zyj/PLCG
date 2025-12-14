#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18353897828084156946ULL;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)114;
unsigned int var_5 = 4073664958U;
short var_6 = (short)-10133;
long long int var_8 = -8406647852302088587LL;
unsigned char var_9 = (unsigned char)14;
int zero = 0;
signed char var_10 = (signed char)-30;
short var_11 = (short)-12676;
long long int var_12 = 1828125257819372621LL;
signed char var_13 = (signed char)-7;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
