#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 475764604U;
unsigned int var_1 = 3790189140U;
signed char var_5 = (signed char)-63;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)25770;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)99;
int var_12 = 448121676;
unsigned int var_13 = 1616571296U;
unsigned char var_14 = (unsigned char)27;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
