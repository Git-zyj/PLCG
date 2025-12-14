#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10286429386467790701ULL;
unsigned int var_1 = 1164848227U;
int var_5 = 343697735;
int var_9 = 1222854405;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_18 = 1960984039;
int var_19 = -360630668;
void init() {
}

void checksum() {
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
