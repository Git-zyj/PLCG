#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)147;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)18;
short var_3 = (short)31629;
_Bool var_4 = (_Bool)1;
long long int var_5 = 3485808206480369250LL;
unsigned char var_6 = (unsigned char)227;
unsigned long long int var_7 = 14989422446643757978ULL;
unsigned long long int var_10 = 2954778322368753573ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)26;
signed char var_14 = (signed char)-121;
unsigned char var_15 = (unsigned char)124;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
