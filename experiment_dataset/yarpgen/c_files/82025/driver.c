#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11652068455996719981ULL;
unsigned long long int var_1 = 13519918246284625224ULL;
unsigned int var_2 = 1898279486U;
short var_3 = (short)5812;
long long int var_4 = 4221877006384317246LL;
short var_5 = (short)-29046;
unsigned long long int var_6 = 8288361043035234204ULL;
short var_7 = (short)-23174;
unsigned char var_8 = (unsigned char)82;
unsigned char var_9 = (unsigned char)217;
int zero = 0;
unsigned short var_10 = (unsigned short)9918;
short var_11 = (short)-1802;
unsigned long long int var_12 = 14842633368071317212ULL;
unsigned char var_13 = (unsigned char)171;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
