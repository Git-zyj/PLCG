#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)127;
unsigned char var_5 = (unsigned char)46;
signed char var_9 = (signed char)59;
short var_11 = (short)13421;
unsigned long long int var_14 = 17362164378870613082ULL;
unsigned int var_15 = 1997190740U;
int zero = 0;
long long int var_16 = 2424514337810103704LL;
long long int var_17 = 7915475995801073011LL;
int var_18 = -992638218;
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
