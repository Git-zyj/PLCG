#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8083409417519906838LL;
_Bool var_7 = (_Bool)1;
long long int var_8 = 251171879959929606LL;
unsigned short var_11 = (unsigned short)18844;
int zero = 0;
unsigned short var_12 = (unsigned short)35185;
signed char var_13 = (signed char)39;
void init() {
}

void checksum() {
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
