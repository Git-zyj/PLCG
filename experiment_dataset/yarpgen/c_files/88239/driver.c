#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)32126;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 10078080957447415061ULL;
short var_5 = (short)5548;
long long int var_7 = -8499624200767771829LL;
long long int var_8 = -9137708082814049834LL;
unsigned int var_9 = 154533560U;
long long int var_11 = 3855165982989431239LL;
int zero = 0;
signed char var_12 = (signed char)63;
long long int var_13 = 1417852052725541053LL;
void init() {
}

void checksum() {
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
