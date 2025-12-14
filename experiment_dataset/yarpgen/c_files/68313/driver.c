#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3267915906780249036LL;
short var_4 = (short)-22612;
short var_8 = (short)-29693;
long long int var_10 = -8094627233272942495LL;
unsigned long long int var_11 = 5651516859192229665ULL;
unsigned char var_12 = (unsigned char)236;
unsigned int var_16 = 429687875U;
int zero = 0;
short var_19 = (short)-13236;
long long int var_20 = -2271928411424501363LL;
unsigned char var_21 = (unsigned char)167;
void init() {
}

void checksum() {
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
