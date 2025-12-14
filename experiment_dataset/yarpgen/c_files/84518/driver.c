#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3447899893233683825LL;
long long int var_5 = -4358033885621439741LL;
short var_6 = (short)-16094;
long long int var_15 = 307751645872825615LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -6552662655410415996LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
