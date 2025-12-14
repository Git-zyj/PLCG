#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-15277;
int var_8 = 783008284;
unsigned int var_10 = 2336245954U;
short var_11 = (short)25026;
signed char var_19 = (signed char)-66;
int zero = 0;
int var_20 = 1956688264;
short var_21 = (short)11042;
long long int var_22 = 8959436260099312016LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
