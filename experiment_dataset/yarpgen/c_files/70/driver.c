#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)13;
unsigned char var_1 = (unsigned char)27;
unsigned long long int var_2 = 7099826294697438811ULL;
unsigned long long int var_4 = 9756594162644702694ULL;
unsigned long long int var_5 = 7876133031744977194ULL;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -1867056818;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
