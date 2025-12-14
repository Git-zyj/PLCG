#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-58;
_Bool var_4 = (_Bool)1;
unsigned long long int var_9 = 18268647380373201588ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-38;
int var_18 = 1418479779;
long long int var_19 = -217560784047955886LL;
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
