#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_3 = 847844143;
unsigned char var_4 = (unsigned char)215;
unsigned long long int var_8 = 2369983394935153637ULL;
int var_9 = 140052649;
int var_10 = 838928175;
int zero = 0;
long long int var_12 = 4085398520516502556LL;
unsigned char var_13 = (unsigned char)24;
unsigned short var_14 = (unsigned short)18574;
signed char var_15 = (signed char)7;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
