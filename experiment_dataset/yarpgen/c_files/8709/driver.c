#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-123;
unsigned long long int var_2 = 12098988566763459184ULL;
unsigned int var_3 = 2741845201U;
unsigned int var_4 = 2225414280U;
unsigned int var_6 = 3452625651U;
unsigned char var_9 = (unsigned char)117;
short var_10 = (short)-12261;
short var_11 = (short)-28332;
unsigned char var_12 = (unsigned char)107;
int zero = 0;
unsigned long long int var_13 = 4296693544272865945ULL;
signed char var_14 = (signed char)-63;
short var_15 = (short)23314;
short var_16 = (short)-30737;
signed char var_17 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
