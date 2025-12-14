#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_10 = (_Bool)0;
long long int var_12 = 6265971346839275385LL;
unsigned int var_13 = 1993130644U;
unsigned char var_15 = (unsigned char)133;
unsigned long long int var_17 = 18425464264907739915ULL;
unsigned long long int var_19 = 3380215549295406003ULL;
int zero = 0;
unsigned long long int var_20 = 8917877352525717366ULL;
long long int var_21 = 3094106435279434337LL;
short var_22 = (short)-2817;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
