#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-28;
unsigned int var_5 = 4179226616U;
long long int var_6 = -3203370607442118833LL;
unsigned int var_8 = 1129020130U;
int zero = 0;
unsigned int var_10 = 203175960U;
unsigned int var_11 = 1124390763U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
