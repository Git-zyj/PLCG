#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28770;
unsigned char var_5 = (unsigned char)217;
short var_8 = (short)10408;
unsigned int var_17 = 4282883605U;
int zero = 0;
unsigned long long int var_18 = 16473068363073598079ULL;
unsigned char var_19 = (unsigned char)231;
unsigned int var_20 = 322799540U;
signed char var_21 = (signed char)-38;
void init() {
}

void checksum() {
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
