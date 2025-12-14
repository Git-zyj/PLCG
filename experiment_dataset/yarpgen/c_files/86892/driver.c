#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-72;
long long int var_3 = -537732747280674611LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_11 = (short)-9908;
long long int var_12 = -2060195225273092683LL;
unsigned short var_13 = (unsigned short)5787;
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
