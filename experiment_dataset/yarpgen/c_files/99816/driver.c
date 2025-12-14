#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)81;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-25;
long long int var_19 = -7707425848127790419LL;
int var_20 = -2036458000;
signed char var_21 = (signed char)1;
int var_22 = -1642587565;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
