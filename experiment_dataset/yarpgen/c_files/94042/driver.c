#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31202;
signed char var_5 = (signed char)-108;
_Bool var_7 = (_Bool)0;
long long int var_11 = -6516532997133124958LL;
unsigned long long int var_12 = 648061989263139079ULL;
int zero = 0;
signed char var_13 = (signed char)-126;
signed char var_14 = (signed char)-74;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
