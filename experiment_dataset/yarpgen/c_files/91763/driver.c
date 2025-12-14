#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)28;
unsigned char var_10 = (unsigned char)34;
_Bool var_12 = (_Bool)1;
long long int var_16 = 5259734546650550501LL;
int zero = 0;
unsigned long long int var_18 = 6672755090976409399ULL;
long long int var_19 = -893346691533697826LL;
void init() {
}

void checksum() {
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
