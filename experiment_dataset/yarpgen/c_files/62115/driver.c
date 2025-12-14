#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)79;
signed char var_3 = (signed char)68;
signed char var_6 = (signed char)45;
unsigned int var_8 = 4066524863U;
long long int var_9 = -1045692747571002314LL;
int zero = 0;
unsigned int var_10 = 59665193U;
short var_11 = (short)-10349;
signed char var_12 = (signed char)-103;
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
