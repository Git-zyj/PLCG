#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-27;
signed char var_3 = (signed char)47;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
int var_11 = -840975547;
long long int var_14 = 4024728925433792374LL;
signed char var_15 = (signed char)101;
int zero = 0;
int var_18 = -1439027817;
unsigned char var_19 = (unsigned char)32;
signed char var_20 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
