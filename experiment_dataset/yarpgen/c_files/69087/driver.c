#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2618110778U;
unsigned int var_11 = 3953400403U;
unsigned int var_14 = 1634335710U;
long long int var_15 = 7370559265584599466LL;
int zero = 0;
signed char var_17 = (signed char)31;
long long int var_18 = -2409037331637102722LL;
unsigned char var_19 = (unsigned char)62;
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
