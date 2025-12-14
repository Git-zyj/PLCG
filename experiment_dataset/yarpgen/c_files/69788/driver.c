#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3409147405361825536ULL;
long long int var_3 = 8147273435880355155LL;
long long int var_6 = -8611087616123546879LL;
long long int var_10 = 1470203621279326100LL;
long long int var_12 = -1531302486807749166LL;
unsigned short var_13 = (unsigned short)9960;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_18 = -1409249525905767677LL;
unsigned int var_19 = 260883412U;
signed char var_20 = (signed char)98;
unsigned int var_21 = 1124512031U;
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
