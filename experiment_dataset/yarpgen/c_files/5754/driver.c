#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2905639465334018288LL;
int var_6 = 47601239;
long long int var_8 = 2294059872450082164LL;
unsigned long long int var_9 = 16434062998235967658ULL;
unsigned char var_10 = (unsigned char)183;
unsigned char var_12 = (unsigned char)136;
unsigned char var_16 = (unsigned char)141;
int zero = 0;
signed char var_18 = (signed char)20;
unsigned long long int var_19 = 17498318162166407754ULL;
long long int var_20 = -4801018571666740267LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
