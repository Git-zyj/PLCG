#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-93;
_Bool var_2 = (_Bool)0;
long long int var_5 = 3882539565906804632LL;
unsigned int var_6 = 4049709888U;
short var_14 = (short)26673;
int zero = 0;
long long int var_16 = 5938356658672874250LL;
long long int var_17 = 4081582556380755120LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
