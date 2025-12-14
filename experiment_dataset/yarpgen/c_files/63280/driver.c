#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 931920691743095978LL;
unsigned char var_3 = (unsigned char)47;
signed char var_6 = (signed char)71;
_Bool var_7 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)83;
void init() {
}

void checksum() {
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
