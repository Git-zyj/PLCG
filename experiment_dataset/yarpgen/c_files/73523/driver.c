#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 260333862;
unsigned long long int var_2 = 6164938504946822350ULL;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)92;
signed char var_7 = (signed char)-43;
long long int var_11 = 7650236261591644734LL;
long long int var_15 = -5736545553429252201LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-24363;
unsigned long long int var_18 = 16274978278622313735ULL;
signed char var_19 = (signed char)32;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
