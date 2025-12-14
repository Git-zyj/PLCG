#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13657854436259131404ULL;
int var_4 = 285553938;
long long int var_6 = 447969133932292448LL;
unsigned short var_7 = (unsigned short)26663;
unsigned long long int var_11 = 8109154569724050559ULL;
int var_16 = -960281425;
int zero = 0;
unsigned short var_18 = (unsigned short)2973;
unsigned char var_19 = (unsigned char)246;
unsigned long long int var_20 = 15239920748011760749ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
