#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1875058865U;
unsigned short var_3 = (unsigned short)34849;
unsigned int var_6 = 2695781654U;
long long int var_10 = -3680339454737878176LL;
long long int var_13 = 8298006830044058273LL;
int zero = 0;
unsigned short var_18 = (unsigned short)59108;
unsigned short var_19 = (unsigned short)2522;
void init() {
}

void checksum() {
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
