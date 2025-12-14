#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1771941204;
unsigned long long int var_5 = 2875071106656528090ULL;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3083876595U;
long long int var_9 = 468361180692530928LL;
unsigned char var_11 = (unsigned char)138;
int zero = 0;
short var_14 = (short)13948;
_Bool var_15 = (_Bool)0;
long long int var_16 = -7737534529366966308LL;
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
