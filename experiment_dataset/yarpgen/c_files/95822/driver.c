#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 253792102;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 2848677861759206143ULL;
unsigned long long int var_9 = 8931488063437457954ULL;
long long int var_11 = -6034604395976286439LL;
int zero = 0;
long long int var_13 = -5632020778032892983LL;
unsigned long long int var_14 = 3471419409501718969ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
