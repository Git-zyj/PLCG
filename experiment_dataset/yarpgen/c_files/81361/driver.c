#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1583416108;
int var_5 = -1443487409;
long long int var_6 = -6547053168134502479LL;
int var_9 = -205632775;
int zero = 0;
short var_13 = (short)-30044;
long long int var_14 = 3841591426777380408LL;
long long int var_15 = -8984022891575476329LL;
signed char var_16 = (signed char)-112;
signed char var_17 = (signed char)-71;
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
