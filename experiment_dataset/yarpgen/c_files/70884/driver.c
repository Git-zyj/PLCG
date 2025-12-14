#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9565181387158519721ULL;
unsigned char var_9 = (unsigned char)118;
unsigned long long int var_12 = 13951158909824723650ULL;
unsigned char var_13 = (unsigned char)19;
unsigned long long int var_15 = 6493523548238173113ULL;
_Bool var_16 = (_Bool)1;
unsigned int var_19 = 2874361580U;
int zero = 0;
unsigned int var_20 = 348788481U;
int var_21 = -1402103936;
unsigned long long int var_22 = 9475525180259492764ULL;
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
