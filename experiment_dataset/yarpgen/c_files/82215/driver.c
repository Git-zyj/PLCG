#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-111;
short var_4 = (short)-26797;
long long int var_5 = -1687435336831251486LL;
long long int var_6 = -4701656913822926753LL;
signed char var_9 = (signed char)9;
unsigned int var_10 = 506956640U;
short var_13 = (short)9734;
int zero = 0;
unsigned int var_15 = 2282996760U;
unsigned short var_16 = (unsigned short)33923;
void init() {
}

void checksum() {
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
