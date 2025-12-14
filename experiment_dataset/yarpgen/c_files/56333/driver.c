#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -405097934018333576LL;
unsigned char var_3 = (unsigned char)81;
long long int var_4 = 2493573648465932078LL;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
int var_8 = -1565512354;
int zero = 0;
long long int var_10 = -7091097351100775242LL;
int var_11 = 1583003368;
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
