#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -672205808;
unsigned int var_4 = 3407812890U;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 1253209970U;
unsigned char var_13 = (unsigned char)145;
unsigned long long int var_15 = 645039379917135484ULL;
unsigned short var_18 = (unsigned short)36817;
signed char var_19 = (signed char)31;
int zero = 0;
signed char var_20 = (signed char)48;
unsigned char var_21 = (unsigned char)236;
short var_22 = (short)-19352;
void init() {
}

void checksum() {
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
