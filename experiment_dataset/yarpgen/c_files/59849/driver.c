#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)208;
long long int var_3 = -1141604926149906574LL;
unsigned short var_7 = (unsigned short)56239;
signed char var_13 = (signed char)10;
int zero = 0;
unsigned int var_16 = 817373154U;
long long int var_17 = -5053599891135580879LL;
unsigned long long int var_18 = 14471522608239195163ULL;
void init() {
}

void checksum() {
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
