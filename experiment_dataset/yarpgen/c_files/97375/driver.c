#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4892;
unsigned short var_4 = (unsigned short)3228;
long long int var_5 = 8784432336247048846LL;
unsigned int var_9 = 3993501371U;
int zero = 0;
signed char var_11 = (signed char)-4;
signed char var_12 = (signed char)102;
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
