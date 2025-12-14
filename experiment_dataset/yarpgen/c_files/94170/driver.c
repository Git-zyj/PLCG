#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 85722957U;
unsigned int var_4 = 572963790U;
unsigned char var_5 = (unsigned char)230;
long long int var_6 = -7566488489075892486LL;
long long int var_7 = -471464697193770023LL;
long long int var_8 = 9217947213525491488LL;
int zero = 0;
unsigned long long int var_14 = 17248006283036837474ULL;
long long int var_15 = 3146263915552226401LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
