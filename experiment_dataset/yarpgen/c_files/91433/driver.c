#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10773204933754325861ULL;
long long int var_7 = 6746005905531011349LL;
long long int var_13 = -8395723876140783093LL;
int zero = 0;
unsigned long long int var_19 = 5118174938488235865ULL;
signed char var_20 = (signed char)-47;
signed char var_21 = (signed char)56;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
