#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)103;
long long int var_2 = 2295240285360573393LL;
unsigned short var_4 = (unsigned short)40721;
short var_5 = (short)28466;
int var_8 = -956778438;
unsigned long long int var_9 = 7311227597738420703ULL;
int zero = 0;
short var_10 = (short)18984;
short var_11 = (short)-5728;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
