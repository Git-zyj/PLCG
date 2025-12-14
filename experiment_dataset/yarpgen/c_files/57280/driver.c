#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-68;
_Bool var_2 = (_Bool)1;
long long int var_4 = 8027338819036570059LL;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-77;
int zero = 0;
signed char var_11 = (signed char)66;
unsigned long long int var_12 = 13312058667151230972ULL;
int var_13 = 301897549;
unsigned int var_14 = 3831587023U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
