#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31563;
long long int var_2 = -5463314565234169710LL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 10105473155493709974ULL;
int var_8 = -1634019200;
unsigned long long int var_9 = 646681839796858801ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)27420;
signed char var_13 = (signed char)-10;
long long int var_14 = -1047041733435252176LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
