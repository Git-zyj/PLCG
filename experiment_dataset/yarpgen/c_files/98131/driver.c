#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13013663928532652482ULL;
short var_2 = (short)-22130;
int var_3 = -1653374580;
unsigned long long int var_4 = 1193663221738348653ULL;
short var_5 = (short)23743;
unsigned char var_6 = (unsigned char)192;
unsigned long long int var_7 = 6349847760400040466ULL;
long long int var_8 = 4058447451527535202LL;
long long int var_10 = -1842017556397779571LL;
int zero = 0;
unsigned int var_11 = 324450296U;
unsigned char var_12 = (unsigned char)104;
signed char var_13 = (signed char)23;
void init() {
}

void checksum() {
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
