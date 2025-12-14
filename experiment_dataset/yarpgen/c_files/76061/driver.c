#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)18;
unsigned char var_9 = (unsigned char)62;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-11986;
int var_17 = -995840726;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-3520;
int var_20 = 80433569;
void init() {
}

void checksum() {
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
