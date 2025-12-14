#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)17;
int var_1 = -1286472547;
unsigned short var_3 = (unsigned short)19037;
_Bool var_4 = (_Bool)0;
long long int var_5 = 1487174060670590608LL;
unsigned char var_6 = (unsigned char)70;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)179;
unsigned int var_10 = 3534633310U;
signed char var_11 = (signed char)-86;
int zero = 0;
unsigned char var_12 = (unsigned char)122;
unsigned long long int var_13 = 3664610969737276145ULL;
signed char var_14 = (signed char)35;
signed char var_15 = (signed char)-76;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
