#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2794070292890067798ULL;
unsigned long long int var_9 = 4609439446775343319ULL;
short var_15 = (short)15484;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)90;
short var_20 = (short)-22291;
unsigned long long int var_21 = 3539471008692467955ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
