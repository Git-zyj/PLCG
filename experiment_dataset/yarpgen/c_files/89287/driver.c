#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)34;
signed char var_1 = (signed char)101;
int var_3 = 682280062;
unsigned char var_4 = (unsigned char)109;
signed char var_5 = (signed char)-47;
unsigned long long int var_8 = 7302019169654058478ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 17229490160518671577ULL;
short var_13 = (short)-2725;
unsigned char var_14 = (unsigned char)82;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
