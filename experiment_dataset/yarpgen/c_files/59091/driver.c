#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 6197306695216269605LL;
_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)81;
int var_12 = 344661371;
long long int var_15 = -5099766991745517091LL;
int zero = 0;
long long int var_17 = -994859264004537790LL;
long long int var_18 = -1675217105990365564LL;
signed char var_19 = (signed char)-75;
unsigned char var_20 = (unsigned char)106;
long long int var_21 = -4903109247902974689LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
