#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3444397263U;
_Bool var_5 = (_Bool)0;
int var_6 = 1755927780;
signed char var_8 = (signed char)-57;
int var_11 = 2084230121;
int var_13 = -550441159;
unsigned short var_15 = (unsigned short)42034;
int zero = 0;
signed char var_17 = (signed char)127;
unsigned int var_18 = 2698396384U;
unsigned int var_19 = 3170181101U;
long long int var_20 = -3937794151050341087LL;
unsigned long long int var_21 = 7602908662757983476ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
