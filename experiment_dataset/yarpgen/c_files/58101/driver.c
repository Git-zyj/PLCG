#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14263;
int var_5 = 616708048;
signed char var_6 = (signed char)-74;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)79;
unsigned long long int var_11 = 2907709155277064276ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
