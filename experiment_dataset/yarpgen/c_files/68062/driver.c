#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)180;
long long int var_11 = -3060256735793559672LL;
unsigned char var_12 = (unsigned char)26;
unsigned char var_15 = (unsigned char)130;
unsigned short var_16 = (unsigned short)24705;
int zero = 0;
unsigned long long int var_19 = 14442922663936395727ULL;
unsigned char var_20 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
