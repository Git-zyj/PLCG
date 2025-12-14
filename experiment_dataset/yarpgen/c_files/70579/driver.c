#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)79;
unsigned long long int var_1 = 6254134996057829696ULL;
unsigned char var_3 = (unsigned char)212;
int var_5 = -1649917812;
unsigned short var_6 = (unsigned short)1076;
unsigned char var_7 = (unsigned char)96;
signed char var_11 = (signed char)-31;
int zero = 0;
long long int var_13 = 7460924865329490144LL;
signed char var_14 = (signed char)-4;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
