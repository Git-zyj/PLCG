#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6733669780277172896LL;
unsigned long long int var_2 = 8292736459040428808ULL;
signed char var_4 = (signed char)-114;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)40441;
unsigned char var_10 = (unsigned char)158;
unsigned long long int var_12 = 10171829409152367645ULL;
int zero = 0;
long long int var_16 = 5092861950743368613LL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)13953;
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
