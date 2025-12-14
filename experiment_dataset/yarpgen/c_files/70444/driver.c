#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1530256963347936848LL;
signed char var_5 = (signed char)-66;
int var_9 = -2040390208;
signed char var_11 = (signed char)97;
unsigned long long int var_16 = 5039430131485690999ULL;
int zero = 0;
int var_18 = 393910764;
unsigned int var_19 = 2644173455U;
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
