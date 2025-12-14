#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)98;
signed char var_5 = (signed char)84;
unsigned long long int var_9 = 7190054682798298730ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)151;
long long int var_13 = 8519096343190484935LL;
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
