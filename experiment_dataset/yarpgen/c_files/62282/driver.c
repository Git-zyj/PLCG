#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5781164109562330689LL;
unsigned long long int var_1 = 13619983403968675665ULL;
signed char var_3 = (signed char)34;
signed char var_4 = (signed char)-64;
int var_8 = 643707088;
short var_9 = (short)-11613;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -1626760105;
unsigned int var_12 = 4122667621U;
_Bool var_13 = (_Bool)1;
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
