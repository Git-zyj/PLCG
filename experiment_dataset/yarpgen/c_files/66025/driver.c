#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3627573368U;
long long int var_4 = 6476597573227698476LL;
unsigned int var_5 = 3645845899U;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)46;
unsigned char var_10 = (unsigned char)182;
unsigned char var_11 = (unsigned char)66;
int zero = 0;
unsigned long long int var_15 = 16288028628106040025ULL;
unsigned long long int var_16 = 16315665076502021207ULL;
void init() {
}

void checksum() {
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
