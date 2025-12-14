#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
unsigned char var_1 = (unsigned char)194;
_Bool var_3 = (_Bool)1;
int var_11 = 293732869;
_Bool var_15 = (_Bool)1;
int var_16 = 597787973;
unsigned long long int var_18 = 1758439137524394743ULL;
_Bool var_19 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)45;
unsigned int var_21 = 3099915828U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
