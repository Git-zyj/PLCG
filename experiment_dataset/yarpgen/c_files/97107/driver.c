#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53286;
unsigned char var_6 = (unsigned char)53;
int var_7 = -1248147600;
unsigned long long int var_10 = 17951938969112406928ULL;
int var_11 = 1107380171;
_Bool var_12 = (_Bool)0;
int var_17 = 851762367;
int zero = 0;
short var_19 = (short)27582;
int var_20 = -902400108;
unsigned long long int var_21 = 1379672499758272591ULL;
unsigned long long int var_22 = 17981039920572294011ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
