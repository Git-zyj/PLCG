#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13773510818381998801ULL;
signed char var_1 = (signed char)4;
unsigned int var_5 = 3554226217U;
unsigned long long int var_6 = 4933338463774850263ULL;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-16555;
unsigned long long int var_10 = 1979795404196098450ULL;
short var_11 = (short)1640;
int var_16 = -1477243767;
int zero = 0;
long long int var_20 = -5188850938201533865LL;
unsigned char var_21 = (unsigned char)8;
unsigned int var_22 = 918986133U;
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
