#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15565810454195754843ULL;
unsigned long long int var_8 = 1298780075777213130ULL;
long long int var_9 = -3509525780528099358LL;
int zero = 0;
long long int var_19 = 7035130965654638189LL;
unsigned long long int var_20 = 17501410822021519678ULL;
signed char var_21 = (signed char)98;
unsigned char var_22 = (unsigned char)131;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
