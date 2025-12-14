#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-59;
unsigned int var_1 = 2814562533U;
unsigned char var_11 = (unsigned char)58;
unsigned long long int var_12 = 3057719704174868596ULL;
unsigned short var_13 = (unsigned short)32095;
unsigned char var_19 = (unsigned char)93;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3273708120U;
unsigned int var_22 = 29128341U;
signed char var_23 = (signed char)32;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
