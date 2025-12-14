#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5671935039636812758ULL;
unsigned short var_2 = (unsigned short)38196;
unsigned char var_6 = (unsigned char)51;
int var_11 = -524992646;
int var_13 = -1983381361;
int zero = 0;
long long int var_16 = 578765452095134673LL;
short var_17 = (short)-9247;
unsigned short var_18 = (unsigned short)50504;
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
