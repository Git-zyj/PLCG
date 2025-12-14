#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3965;
unsigned long long int var_1 = 1335097349187319556ULL;
unsigned long long int var_3 = 11669049686314433575ULL;
unsigned long long int var_6 = 15216739927410529401ULL;
unsigned long long int var_10 = 220754737758390505ULL;
unsigned long long int var_11 = 10934660773133152350ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 17202418699160655215ULL;
_Bool var_19 = (_Bool)0;
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
