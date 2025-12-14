#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9876069510590435670ULL;
_Bool var_2 = (_Bool)0;
int var_3 = 1163385828;
signed char var_4 = (signed char)-92;
short var_5 = (short)18972;
unsigned short var_6 = (unsigned short)1006;
unsigned long long int var_7 = 12066921042506437864ULL;
int var_9 = 1022892915;
unsigned long long int var_12 = 14938621270291048136ULL;
unsigned char var_13 = (unsigned char)227;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
long long int var_17 = 1009516896660018533LL;
short var_18 = (short)-9651;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
