#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1710869353;
short var_3 = (short)-25290;
unsigned char var_14 = (unsigned char)10;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-38;
unsigned long long int var_18 = 10848644730145886595ULL;
int zero = 0;
signed char var_19 = (signed char)-77;
unsigned char var_20 = (unsigned char)114;
short var_21 = (short)-4088;
unsigned long long int var_22 = 7598017212802607255ULL;
short var_23 = (short)-29137;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
