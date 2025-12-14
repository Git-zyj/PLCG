#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3489040745429692755LL;
unsigned int var_8 = 1499519652U;
unsigned long long int var_9 = 12456470798192908301ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)49885;
long long int var_13 = 8331952835962795819LL;
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
