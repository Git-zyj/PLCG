#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12827963604880240632ULL;
unsigned long long int var_4 = 11036403201176069181ULL;
long long int var_8 = -184534044868064951LL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)37787;
short var_15 = (short)-1474;
int zero = 0;
long long int var_19 = 3901118112506988764LL;
signed char var_20 = (signed char)57;
long long int var_21 = -2684043389010429109LL;
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
