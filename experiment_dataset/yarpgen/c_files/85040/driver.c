#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5977427653200184786LL;
unsigned char var_11 = (unsigned char)217;
unsigned int var_12 = 3541965284U;
short var_14 = (short)-1937;
int zero = 0;
unsigned long long int var_18 = 3943548502015836366ULL;
long long int var_19 = 2990688487887126757LL;
signed char var_20 = (signed char)-41;
unsigned int var_21 = 3442489927U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
