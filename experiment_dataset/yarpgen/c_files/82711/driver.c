#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)71;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 9720108476911988025ULL;
int zero = 0;
long long int var_20 = 5270086003221052994LL;
signed char var_21 = (signed char)-119;
unsigned int var_22 = 794243139U;
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
