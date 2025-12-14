#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2463900974038814789LL;
signed char var_6 = (signed char)-37;
int var_7 = -1490735512;
unsigned short var_8 = (unsigned short)16112;
int zero = 0;
int var_14 = 1910242811;
unsigned short var_15 = (unsigned short)4088;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)57285;
long long int var_18 = -4971438453916062403LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
