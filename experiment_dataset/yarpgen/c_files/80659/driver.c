#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4754249585348357401LL;
unsigned char var_4 = (unsigned char)213;
unsigned char var_9 = (unsigned char)209;
signed char var_11 = (signed char)-57;
unsigned char var_12 = (unsigned char)21;
int zero = 0;
unsigned char var_19 = (unsigned char)84;
int var_20 = -1920426708;
unsigned short var_21 = (unsigned short)39511;
unsigned char var_22 = (unsigned char)178;
signed char var_23 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
