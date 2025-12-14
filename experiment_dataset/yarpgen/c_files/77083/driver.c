#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1132058600208279460LL;
unsigned int var_1 = 1823482967U;
unsigned char var_2 = (unsigned char)119;
signed char var_5 = (signed char)123;
unsigned long long int var_10 = 10385375456029682574ULL;
int zero = 0;
unsigned int var_11 = 3601457248U;
int var_12 = -1861361740;
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
