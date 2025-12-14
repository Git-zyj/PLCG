#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-90;
unsigned short var_11 = (unsigned short)54152;
unsigned long long int var_14 = 10352738867184649197ULL;
long long int var_15 = 1693732124219211812LL;
int zero = 0;
signed char var_16 = (signed char)-115;
unsigned long long int var_17 = 11175447400601983395ULL;
signed char var_18 = (signed char)-19;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
