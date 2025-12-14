#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-81;
signed char var_14 = (signed char)69;
unsigned int var_17 = 1711210435U;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = 6908247489846924759LL;
signed char var_21 = (signed char)102;
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
