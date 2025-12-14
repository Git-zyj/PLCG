#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5046474040013331926ULL;
unsigned long long int var_3 = 394166100036673804ULL;
int var_4 = 112727552;
unsigned short var_5 = (unsigned short)36065;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 11760530246204049907ULL;
int var_20 = -1493396561;
unsigned char var_21 = (unsigned char)7;
void init() {
}

void checksum() {
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
