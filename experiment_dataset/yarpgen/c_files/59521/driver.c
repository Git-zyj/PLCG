#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14968977471883484950ULL;
unsigned short var_3 = (unsigned short)53465;
unsigned int var_5 = 1987718708U;
unsigned int var_9 = 267251961U;
unsigned short var_10 = (unsigned short)37644;
long long int var_15 = -2240249704376454640LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 11954779921898035194ULL;
short var_20 = (short)27273;
int var_21 = -1867951095;
unsigned short var_22 = (unsigned short)53324;
unsigned short var_23 = (unsigned short)41510;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
