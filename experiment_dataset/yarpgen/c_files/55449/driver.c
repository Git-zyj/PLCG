#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -380328655;
unsigned long long int var_5 = 6139585815970099398ULL;
unsigned long long int var_8 = 3876257787498984841ULL;
int var_9 = -2111011557;
unsigned long long int var_10 = 2699090637191806748ULL;
int zero = 0;
short var_13 = (short)1296;
unsigned int var_14 = 1021511641U;
int var_15 = 66136457;
unsigned int var_16 = 2972403826U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
