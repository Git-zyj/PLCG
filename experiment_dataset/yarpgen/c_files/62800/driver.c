#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13856;
short var_10 = (short)3493;
_Bool var_12 = (_Bool)0;
unsigned long long int var_16 = 15833741029894615587ULL;
int zero = 0;
unsigned long long int var_18 = 12194810321634690556ULL;
unsigned long long int var_19 = 18045285909390060975ULL;
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
