#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 675488531;
unsigned int var_8 = 2574664894U;
unsigned long long int var_10 = 3259874745158647942ULL;
unsigned long long int var_12 = 9946957991334759988ULL;
int zero = 0;
unsigned int var_16 = 3513660525U;
long long int var_17 = -8236378150335308830LL;
unsigned short var_18 = (unsigned short)35785;
long long int var_19 = 1455524521433539176LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
