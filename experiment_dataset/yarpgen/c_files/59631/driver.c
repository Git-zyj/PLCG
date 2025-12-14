#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)(-127 - 1);
unsigned int var_2 = 3916288356U;
long long int var_13 = 7692268450938222291LL;
int var_14 = 1856533800;
int zero = 0;
int var_15 = 307526735;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)11;
signed char var_18 = (signed char)119;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
