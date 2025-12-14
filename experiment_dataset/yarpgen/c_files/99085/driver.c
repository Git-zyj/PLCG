#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)37535;
_Bool var_6 = (_Bool)0;
int var_10 = 1317834393;
long long int var_14 = -4895621369848107944LL;
int zero = 0;
unsigned long long int var_15 = 8680079609444601957ULL;
short var_16 = (short)12759;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
