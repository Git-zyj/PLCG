#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 5359373773331229487ULL;
unsigned int var_6 = 2234344075U;
unsigned long long int var_7 = 1909280514685594123ULL;
int var_9 = 2068869114;
int zero = 0;
int var_13 = -97402505;
unsigned char var_14 = (unsigned char)117;
unsigned int var_15 = 3262346832U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
