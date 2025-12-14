#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = -1167624342;
unsigned short var_5 = (unsigned short)46670;
unsigned short var_10 = (unsigned short)14846;
long long int var_13 = -3779353991134823595LL;
short var_14 = (short)9631;
int zero = 0;
unsigned long long int var_17 = 15390210921860215302ULL;
unsigned int var_18 = 4241919634U;
unsigned short var_19 = (unsigned short)49640;
void init() {
}

void checksum() {
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
