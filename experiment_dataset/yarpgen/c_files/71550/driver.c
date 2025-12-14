#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6249295237991209181ULL;
int var_2 = -2004768849;
long long int var_6 = 6795739720332852673LL;
long long int var_7 = -7113395572707705659LL;
int var_8 = 1040548523;
unsigned int var_9 = 3909144418U;
unsigned long long int var_10 = 3234612534186550233ULL;
signed char var_11 = (signed char)87;
unsigned char var_13 = (unsigned char)75;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 609563916U;
int zero = 0;
unsigned char var_17 = (unsigned char)112;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3627396183U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
