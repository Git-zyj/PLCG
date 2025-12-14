#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2396473909625324706ULL;
unsigned long long int var_1 = 15243845826375103947ULL;
unsigned long long int var_2 = 9251665190029449978ULL;
unsigned long long int var_3 = 6123434579362436110ULL;
unsigned long long int var_5 = 10386502610999366006ULL;
unsigned long long int var_10 = 8417348282249326058ULL;
unsigned long long int var_11 = 14467508806658711584ULL;
unsigned long long int var_15 = 6773463928585794151ULL;
int zero = 0;
unsigned long long int var_16 = 7245334516139620412ULL;
unsigned long long int var_17 = 17796023566091510508ULL;
unsigned long long int var_18 = 13794729904580441512ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
