#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 14367895921717496618ULL;
signed char var_9 = (signed char)5;
unsigned long long int var_17 = 588662030624454032ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)142;
signed char var_20 = (signed char)-70;
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
