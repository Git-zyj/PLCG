#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)36;
long long int var_8 = 8982237313591873370LL;
_Bool var_10 = (_Bool)0;
int var_11 = -466083057;
int zero = 0;
unsigned int var_14 = 451416451U;
signed char var_15 = (signed char)-76;
int var_16 = 1877768700;
unsigned int var_17 = 2271101234U;
unsigned short var_18 = (unsigned short)10412;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
