#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20760;
signed char var_2 = (signed char)32;
unsigned char var_10 = (unsigned char)228;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 7718308292982601134ULL;
signed char var_15 = (signed char)-78;
int zero = 0;
signed char var_18 = (signed char)53;
unsigned long long int var_19 = 3015243999043301994ULL;
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
