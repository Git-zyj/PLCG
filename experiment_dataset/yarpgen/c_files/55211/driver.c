#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -567066954201088338LL;
signed char var_3 = (signed char)-78;
unsigned short var_8 = (unsigned short)59425;
int zero = 0;
signed char var_11 = (signed char)36;
long long int var_12 = -298988011059312677LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
