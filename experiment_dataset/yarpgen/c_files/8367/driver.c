#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3209396622427398856LL;
long long int var_9 = -2956882751868565082LL;
unsigned int var_11 = 915492720U;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -3663925287412972528LL;
unsigned long long int var_21 = 6722014290646532647ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
