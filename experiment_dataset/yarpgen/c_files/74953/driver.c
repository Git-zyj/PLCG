#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-115;
unsigned char var_5 = (unsigned char)27;
signed char var_7 = (signed char)88;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)27;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)251;
void init() {
}

void checksum() {
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
