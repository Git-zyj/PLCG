#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)22;
unsigned long long int var_5 = 3914055405596318483ULL;
unsigned char var_10 = (unsigned char)226;
unsigned int var_11 = 2939280668U;
_Bool var_16 = (_Bool)0;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)9;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)52;
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
