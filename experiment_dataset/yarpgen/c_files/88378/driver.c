#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)6403;
signed char var_5 = (signed char)68;
signed char var_15 = (signed char)19;
short var_17 = (short)-17564;
int zero = 0;
unsigned short var_19 = (unsigned short)27411;
signed char var_20 = (signed char)-17;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
