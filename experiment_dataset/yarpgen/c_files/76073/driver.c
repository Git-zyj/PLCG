#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3616471663462048804ULL;
int var_2 = -73191283;
int var_3 = -258127822;
unsigned long long int var_10 = 998064534719971263ULL;
unsigned long long int var_12 = 15925622137319935061ULL;
signed char var_13 = (signed char)50;
int zero = 0;
int var_17 = -254304461;
unsigned char var_18 = (unsigned char)213;
void init() {
}

void checksum() {
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
