#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5439739013945980311LL;
unsigned long long int var_1 = 13021545205091298976ULL;
unsigned char var_2 = (unsigned char)143;
int var_3 = -1879175617;
_Bool var_6 = (_Bool)1;
_Bool var_12 = (_Bool)0;
long long int var_15 = -4690335858434506749LL;
int zero = 0;
long long int var_17 = -3023938206599176875LL;
signed char var_18 = (signed char)30;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
