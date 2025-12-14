#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)1;
signed char var_3 = (signed char)94;
signed char var_5 = (signed char)29;
unsigned int var_8 = 1762366717U;
unsigned int var_9 = 3532625630U;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)94;
int zero = 0;
signed char var_12 = (signed char)-76;
signed char var_13 = (signed char)-89;
short var_14 = (short)-5913;
long long int var_15 = -1361051725456284763LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
