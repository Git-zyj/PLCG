#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9673223545105005055ULL;
unsigned long long int var_9 = 2814054255959646300ULL;
signed char var_14 = (signed char)-24;
int zero = 0;
unsigned long long int var_18 = 16319250959239037737ULL;
unsigned long long int var_19 = 3583749118099485169ULL;
unsigned long long int var_20 = 7302880582781785936ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
