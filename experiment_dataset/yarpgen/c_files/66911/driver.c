#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9858594804079927587ULL;
long long int var_1 = -1478161321899627924LL;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)-71;
unsigned short var_5 = (unsigned short)35129;
signed char var_6 = (signed char)-100;
long long int var_9 = 7810992336096405157LL;
int zero = 0;
unsigned short var_11 = (unsigned short)13689;
unsigned long long int var_12 = 13340222543988112163ULL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
