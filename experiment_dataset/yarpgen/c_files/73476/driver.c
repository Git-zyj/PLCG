#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-118;
long long int var_6 = -2814285087292469475LL;
long long int var_7 = 8526179150485985520LL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -7470003062549654537LL;
int zero = 0;
unsigned short var_18 = (unsigned short)29568;
long long int var_19 = -2360987928131510927LL;
void init() {
}

void checksum() {
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
