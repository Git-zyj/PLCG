#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -129693646;
unsigned char var_1 = (unsigned char)186;
long long int var_2 = -6750579753088482483LL;
int var_3 = -1199180370;
short var_4 = (short)-19183;
long long int var_6 = 6230899571214299695LL;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-77;
int zero = 0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)210;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
