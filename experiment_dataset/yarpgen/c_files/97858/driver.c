#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4701058080048798439LL;
long long int var_4 = -6067478586655497250LL;
signed char var_5 = (signed char)38;
short var_6 = (short)-19868;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)8;
unsigned int var_12 = 3752235988U;
signed char var_13 = (signed char)-31;
void init() {
}

void checksum() {
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
