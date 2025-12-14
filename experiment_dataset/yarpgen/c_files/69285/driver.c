#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 428881441882616766ULL;
unsigned char var_11 = (unsigned char)68;
unsigned int var_12 = 3025210050U;
_Bool var_13 = (_Bool)0;
unsigned int var_18 = 3901744737U;
int zero = 0;
unsigned long long int var_19 = 11124246737805773646ULL;
unsigned int var_20 = 615649489U;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1164752138U;
unsigned short var_23 = (unsigned short)20871;
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
