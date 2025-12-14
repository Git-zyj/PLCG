#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)82;
_Bool var_8 = (_Bool)1;
long long int var_9 = -5736507470629728681LL;
signed char var_11 = (signed char)80;
int zero = 0;
int var_12 = 1970104618;
unsigned long long int var_13 = 9222417649130254466ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
