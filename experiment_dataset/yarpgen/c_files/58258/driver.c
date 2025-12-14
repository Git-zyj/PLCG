#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 710163613;
unsigned long long int var_1 = 6757075626502669186ULL;
_Bool var_4 = (_Bool)0;
int var_5 = 184624416;
long long int var_6 = -5614647769538954549LL;
short var_7 = (short)-32423;
long long int var_8 = 708637680698111076LL;
unsigned long long int var_10 = 9470882256121407575ULL;
int var_13 = 1327398564;
unsigned long long int var_16 = 14853048395142091052ULL;
int zero = 0;
int var_18 = -1796080356;
short var_19 = (short)-13473;
unsigned long long int var_20 = 9508604045222025565ULL;
long long int var_21 = -4871450044579904251LL;
int var_22 = 1416514020;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
