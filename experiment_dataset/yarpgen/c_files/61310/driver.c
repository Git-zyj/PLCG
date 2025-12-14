#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)101;
unsigned char var_4 = (unsigned char)202;
unsigned long long int var_5 = 18123055814759355641ULL;
unsigned long long int var_6 = 17356488125099572612ULL;
unsigned long long int var_11 = 2232518394227061972ULL;
int zero = 0;
signed char var_14 = (signed char)-11;
short var_15 = (short)-19355;
unsigned long long int var_16 = 11247224096586243652ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
