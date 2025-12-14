#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16132470874843910963ULL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_5 = 13589088313925239354ULL;
int var_8 = -353767078;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 2402324206U;
unsigned char var_11 = (unsigned char)66;
unsigned short var_12 = (unsigned short)21827;
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
