#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17114190508962922186ULL;
unsigned long long int var_7 = 15311807567918854809ULL;
unsigned long long int var_8 = 3074915635277320254ULL;
int zero = 0;
unsigned long long int var_12 = 2541382462448312166ULL;
unsigned long long int var_13 = 8896201245888562016ULL;
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
