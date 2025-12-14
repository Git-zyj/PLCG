#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)29281;
short var_6 = (short)-8662;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 2186413853U;
_Bool var_13 = (_Bool)1;
int var_16 = 538208153;
int zero = 0;
unsigned short var_18 = (unsigned short)11018;
int var_19 = 1215659997;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
