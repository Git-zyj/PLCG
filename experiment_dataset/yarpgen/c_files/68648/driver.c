#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 224919901U;
int var_7 = 399797854;
int var_9 = -25833805;
unsigned short var_10 = (unsigned short)16972;
signed char var_11 = (signed char)-25;
int var_13 = 1552573663;
unsigned char var_14 = (unsigned char)181;
unsigned int var_15 = 4262184772U;
int zero = 0;
int var_20 = 2127740767;
unsigned short var_21 = (unsigned short)11005;
unsigned int var_22 = 3032199345U;
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
