#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4543751623487107766LL;
int var_8 = 15692419;
unsigned long long int var_10 = 13611020788933823746ULL;
int var_15 = -1237586747;
int zero = 0;
unsigned long long int var_16 = 13844251712323219468ULL;
signed char var_17 = (signed char)116;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
