#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)22;
unsigned int var_5 = 3243227588U;
unsigned long long int var_6 = 3416411240548486109ULL;
unsigned short var_7 = (unsigned short)52517;
unsigned long long int var_10 = 9132674918217900169ULL;
int zero = 0;
unsigned int var_11 = 1838839503U;
unsigned long long int var_12 = 1983594551473367996ULL;
unsigned long long int var_13 = 17058017116120617937ULL;
long long int var_14 = -1721561994608400360LL;
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
