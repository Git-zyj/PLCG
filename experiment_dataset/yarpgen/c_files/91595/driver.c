#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -244845706;
int var_6 = -1576785976;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-55;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)146;
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
