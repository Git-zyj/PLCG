#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 7490448203866461324LL;
unsigned int var_11 = 526713400U;
long long int var_12 = 5901173806302983560LL;
int zero = 0;
signed char var_20 = (signed char)86;
signed char var_21 = (signed char)-110;
unsigned int var_22 = 3282351710U;
signed char var_23 = (signed char)-38;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
