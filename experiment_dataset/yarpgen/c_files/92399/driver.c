#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-46;
long long int var_4 = -3720872967629290199LL;
unsigned long long int var_6 = 17226999451188244166ULL;
signed char var_8 = (signed char)40;
unsigned long long int var_9 = 2412828837863057167ULL;
unsigned short var_13 = (unsigned short)3488;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)107;
unsigned long long int var_17 = 13383142115332107271ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
