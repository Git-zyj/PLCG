#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 481630787U;
int var_1 = -449641797;
signed char var_2 = (signed char)0;
unsigned long long int var_6 = 10804307821595813996ULL;
signed char var_9 = (signed char)29;
signed char var_10 = (signed char)-55;
int zero = 0;
unsigned char var_12 = (unsigned char)77;
unsigned char var_13 = (unsigned char)143;
signed char var_14 = (signed char)-35;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
