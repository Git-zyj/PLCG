#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6754670846478485770LL;
short var_1 = (short)4136;
_Bool var_3 = (_Bool)1;
long long int var_5 = -1479317174584750918LL;
unsigned short var_6 = (unsigned short)16301;
unsigned char var_7 = (unsigned char)179;
unsigned short var_8 = (unsigned short)18034;
unsigned long long int var_12 = 6270919344004804272ULL;
short var_13 = (short)23243;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 4111035281873580473ULL;
long long int var_16 = -4062943704198887866LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
