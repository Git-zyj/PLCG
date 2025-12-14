#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)214;
_Bool var_2 = (_Bool)0;
long long int var_6 = 8433550616165753019LL;
int zero = 0;
unsigned int var_13 = 3899653327U;
long long int var_14 = 4885402907270707438LL;
unsigned int var_15 = 577243997U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
