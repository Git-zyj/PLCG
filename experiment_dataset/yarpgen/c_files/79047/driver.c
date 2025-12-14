#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6179362519037119178ULL;
signed char var_3 = (signed char)58;
int var_4 = 966485906;
long long int var_5 = -2553436489581886815LL;
signed char var_6 = (signed char)11;
int var_8 = -1523988316;
int var_9 = 1908369583;
int zero = 0;
signed char var_10 = (signed char)-4;
unsigned int var_11 = 1721181623U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
