#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)1;
unsigned short var_12 = (unsigned short)16949;
int zero = 0;
unsigned short var_16 = (unsigned short)54744;
unsigned int var_17 = 699187513U;
long long int var_18 = -8613459434676467648LL;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-54;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
