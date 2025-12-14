#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 201079487604758851ULL;
signed char var_1 = (signed char)74;
long long int var_18 = 3731231934848879260LL;
int zero = 0;
int var_19 = -1182953528;
short var_20 = (short)10410;
long long int var_21 = 2264830941479311569LL;
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
