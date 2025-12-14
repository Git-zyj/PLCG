#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)153;
signed char var_6 = (signed char)8;
unsigned long long int var_7 = 9220997154096656750ULL;
unsigned char var_9 = (unsigned char)117;
int var_14 = -1899124591;
int zero = 0;
int var_15 = 1324428421;
unsigned long long int var_16 = 8000341664235688232ULL;
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
