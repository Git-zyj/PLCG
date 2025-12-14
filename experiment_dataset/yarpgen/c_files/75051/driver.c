#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12016266664897198876ULL;
unsigned long long int var_1 = 15040854871621027796ULL;
signed char var_4 = (signed char)-44;
long long int var_6 = 4227616788755948908LL;
int zero = 0;
int var_10 = 193574151;
unsigned short var_11 = (unsigned short)34616;
unsigned long long int var_12 = 5633522984125133361ULL;
unsigned short var_13 = (unsigned short)15062;
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
