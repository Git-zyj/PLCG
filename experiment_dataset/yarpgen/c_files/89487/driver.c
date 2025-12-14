#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-92;
int var_1 = 1953874261;
_Bool var_2 = (_Bool)0;
long long int var_5 = -3577887511358481859LL;
long long int var_7 = 7747492830675756034LL;
long long int var_8 = 7116469143939460298LL;
long long int var_9 = 1099631967591351609LL;
int zero = 0;
unsigned short var_10 = (unsigned short)2455;
signed char var_11 = (signed char)110;
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
