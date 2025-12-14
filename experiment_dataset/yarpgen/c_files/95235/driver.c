#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)83;
_Bool var_1 = (_Bool)1;
long long int var_2 = 4819140246030314323LL;
signed char var_5 = (signed char)39;
long long int var_10 = -4574817953680474920LL;
unsigned char var_11 = (unsigned char)203;
int zero = 0;
long long int var_14 = -5210908496579882466LL;
int var_15 = -1222739323;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
