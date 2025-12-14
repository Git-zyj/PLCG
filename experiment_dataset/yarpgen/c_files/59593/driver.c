#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5489846726385758127LL;
unsigned short var_9 = (unsigned short)43964;
int var_13 = 503295776;
unsigned int var_14 = 3775573532U;
short var_16 = (short)21484;
unsigned long long int var_19 = 14315521015273403626ULL;
int zero = 0;
short var_20 = (short)23638;
int var_21 = 503385711;
_Bool var_22 = (_Bool)1;
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
