#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2792074044U;
short var_8 = (short)-24464;
long long int var_9 = -7199717515065231062LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_12 = -3248778708800383531LL;
unsigned short var_13 = (unsigned short)51805;
unsigned short var_14 = (unsigned short)48474;
void init() {
}

void checksum() {
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
