#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8529282997571750972LL;
short var_7 = (short)20677;
long long int var_10 = 3043448970393630727LL;
long long int var_11 = -6985096208997696740LL;
unsigned int var_12 = 5549772U;
int zero = 0;
long long int var_13 = 1525796583488159480LL;
unsigned char var_14 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
