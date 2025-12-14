#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)62;
long long int var_3 = -3211309600487425436LL;
unsigned int var_7 = 353059732U;
int zero = 0;
unsigned char var_17 = (unsigned char)196;
signed char var_18 = (signed char)-116;
long long int var_19 = -9030189111526693879LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
