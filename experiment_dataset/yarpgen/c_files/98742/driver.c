#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6945861629923627207LL;
unsigned short var_5 = (unsigned short)16954;
_Bool var_6 = (_Bool)1;
unsigned short var_13 = (unsigned short)42655;
int zero = 0;
unsigned char var_15 = (unsigned char)229;
signed char var_16 = (signed char)11;
long long int var_17 = 5406327153481519544LL;
unsigned short var_18 = (unsigned short)41146;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
