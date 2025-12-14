#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-14896;
signed char var_3 = (signed char)-98;
unsigned char var_4 = (unsigned char)118;
unsigned char var_5 = (unsigned char)176;
unsigned long long int var_7 = 14527494341776819330ULL;
unsigned long long int var_8 = 1748659236531986735ULL;
unsigned int var_9 = 3134343874U;
unsigned char var_10 = (unsigned char)179;
signed char var_11 = (signed char)-56;
unsigned long long int var_13 = 14100208126130386993ULL;
int zero = 0;
short var_14 = (short)-24455;
signed char var_15 = (signed char)115;
short var_16 = (short)-4001;
unsigned int var_17 = 689761160U;
signed char var_18 = (signed char)-87;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
