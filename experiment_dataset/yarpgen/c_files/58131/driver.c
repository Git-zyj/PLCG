#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)77;
unsigned long long int var_6 = 6678910260068844227ULL;
unsigned int var_12 = 2954967891U;
int var_14 = -2012856373;
_Bool var_15 = (_Bool)0;
signed char var_17 = (signed char)39;
int zero = 0;
short var_19 = (short)-29256;
signed char var_20 = (signed char)-4;
signed char var_21 = (signed char)-102;
void init() {
}

void checksum() {
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
