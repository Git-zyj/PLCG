#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 152086546U;
int var_6 = 279670163;
int var_10 = -1292464049;
unsigned char var_12 = (unsigned char)243;
_Bool var_15 = (_Bool)1;
unsigned char var_18 = (unsigned char)213;
int zero = 0;
unsigned int var_20 = 428098581U;
int var_21 = -875910468;
unsigned int var_22 = 744767087U;
long long int var_23 = 7585319057031371409LL;
long long int var_24 = 3253014757852461384LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
