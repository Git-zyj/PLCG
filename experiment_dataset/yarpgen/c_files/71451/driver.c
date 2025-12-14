#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-4882;
signed char var_6 = (signed char)32;
unsigned short var_9 = (unsigned short)40088;
long long int var_14 = -8481530234628232445LL;
int var_17 = -1803699302;
int zero = 0;
long long int var_20 = 9104496451433980085LL;
short var_21 = (short)-14931;
unsigned long long int var_22 = 11535335570270320358ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
