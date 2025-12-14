#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-126;
short var_1 = (short)-30976;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 16570042028338209917ULL;
long long int var_4 = 3886064659787544119LL;
_Bool var_5 = (_Bool)1;
int var_10 = -576910445;
signed char var_11 = (signed char)-80;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)53;
int var_18 = -1631359212;
unsigned char var_19 = (unsigned char)123;
int zero = 0;
long long int var_20 = 3516311944250901155LL;
unsigned char var_21 = (unsigned char)238;
void init() {
}

void checksum() {
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
