#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11479;
unsigned long long int var_2 = 4053750475091902173ULL;
_Bool var_4 = (_Bool)0;
unsigned char var_7 = (unsigned char)204;
int var_11 = 1437815743;
int zero = 0;
long long int var_12 = -6498266882877297600LL;
unsigned short var_13 = (unsigned short)54294;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
