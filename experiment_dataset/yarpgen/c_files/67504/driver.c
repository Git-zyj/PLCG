#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10443567168899118588ULL;
unsigned long long int var_4 = 8386120688779513181ULL;
unsigned int var_5 = 2148258679U;
long long int var_10 = -920102329365527123LL;
short var_11 = (short)27315;
short var_15 = (short)-20747;
int zero = 0;
signed char var_20 = (signed char)-117;
short var_21 = (short)-3782;
int var_22 = 1619676851;
void init() {
}

void checksum() {
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
