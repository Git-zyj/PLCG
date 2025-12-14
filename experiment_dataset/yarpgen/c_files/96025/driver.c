#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3213167333U;
signed char var_6 = (signed char)-55;
long long int var_8 = 6477885908442183406LL;
unsigned int var_10 = 1841574348U;
int zero = 0;
long long int var_18 = 8019363219436220398LL;
unsigned char var_19 = (unsigned char)56;
void init() {
}

void checksum() {
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
