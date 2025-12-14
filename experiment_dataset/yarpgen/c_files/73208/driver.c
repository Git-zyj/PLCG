#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 230962063U;
int var_5 = 1017702379;
unsigned short var_7 = (unsigned short)37636;
int var_8 = -345161962;
short var_9 = (short)16342;
unsigned short var_11 = (unsigned short)41770;
int var_13 = -1473549135;
int zero = 0;
unsigned int var_14 = 996120892U;
int var_15 = -748202146;
int var_16 = -1046122393;
int var_17 = -815190489;
signed char var_18 = (signed char)102;
signed char var_19 = (signed char)113;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
