#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -438368637;
unsigned int var_10 = 2656520740U;
int var_16 = 2050194227;
int zero = 0;
signed char var_18 = (signed char)50;
int var_19 = 305946311;
unsigned char var_20 = (unsigned char)10;
long long int var_21 = -1452532863535216135LL;
void init() {
}

void checksum() {
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
