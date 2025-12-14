#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1135203710027836929LL;
long long int var_6 = 4729266923638253462LL;
_Bool var_11 = (_Bool)0;
long long int var_13 = -1783426987656509474LL;
int zero = 0;
unsigned long long int var_15 = 16586456307071225144ULL;
unsigned long long int var_16 = 7792184470835757892ULL;
short var_17 = (short)20265;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
