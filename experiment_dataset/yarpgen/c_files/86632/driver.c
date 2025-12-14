#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)26;
unsigned long long int var_4 = 792416570658458333ULL;
_Bool var_5 = (_Bool)0;
int var_7 = -531700270;
signed char var_8 = (signed char)62;
signed char var_9 = (signed char)0;
int zero = 0;
unsigned short var_10 = (unsigned short)41852;
unsigned int var_11 = 3444528991U;
signed char var_12 = (signed char)-51;
signed char var_13 = (signed char)21;
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
