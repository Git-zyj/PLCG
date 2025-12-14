#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56533;
short var_13 = (short)21571;
long long int var_14 = 46851319835346104LL;
int zero = 0;
signed char var_17 = (signed char)58;
unsigned long long int var_18 = 10298044975904920864ULL;
unsigned long long int var_19 = 9468196059788578892ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
