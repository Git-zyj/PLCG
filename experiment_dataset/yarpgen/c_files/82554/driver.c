#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6354394042258161795LL;
unsigned char var_6 = (unsigned char)8;
short var_7 = (short)-12647;
unsigned char var_9 = (unsigned char)43;
unsigned char var_10 = (unsigned char)255;
int zero = 0;
unsigned char var_19 = (unsigned char)70;
long long int var_20 = -3979604101156614613LL;
void init() {
}

void checksum() {
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
