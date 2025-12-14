#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)58;
long long int var_3 = 8831393424583580095LL;
long long int var_7 = 5337746138969535250LL;
int zero = 0;
signed char var_13 = (signed char)-56;
unsigned short var_14 = (unsigned short)49369;
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
