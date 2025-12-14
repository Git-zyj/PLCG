#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)68;
signed char var_1 = (signed char)-79;
unsigned long long int var_6 = 14648911326370774212ULL;
unsigned short var_7 = (unsigned short)21831;
unsigned long long int var_8 = 18156441239535774421ULL;
int var_9 = 1077868818;
unsigned char var_11 = (unsigned char)43;
unsigned char var_12 = (unsigned char)55;
int zero = 0;
unsigned short var_13 = (unsigned short)505;
long long int var_14 = 3105504780028533247LL;
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
