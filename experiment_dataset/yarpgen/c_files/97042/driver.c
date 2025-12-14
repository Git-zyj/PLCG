#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_6 = 113235543;
int var_8 = 543479638;
long long int var_9 = -4823879566154932292LL;
int zero = 0;
unsigned char var_10 = (unsigned char)232;
unsigned long long int var_11 = 13361580222970665648ULL;
int var_12 = -736870415;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
