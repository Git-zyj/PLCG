#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1985540648U;
signed char var_5 = (signed char)95;
int zero = 0;
long long int var_10 = -6900888982366304279LL;
long long int var_11 = -5414163962068916106LL;
unsigned long long int var_12 = 6012164451310015653ULL;
long long int var_13 = -7770369864840013924LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
