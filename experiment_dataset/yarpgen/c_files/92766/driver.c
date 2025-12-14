#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 1880655169102069079ULL;
unsigned long long int var_10 = 8080897762190602895ULL;
int zero = 0;
long long int var_18 = 1245580184260355727LL;
unsigned char var_19 = (unsigned char)132;
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
