#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)100;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)353;
long long int var_9 = -8823536803570850069LL;
int zero = 0;
long long int var_10 = 5572822159405556556LL;
signed char var_11 = (signed char)39;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
