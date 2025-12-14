#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 238200915084125014ULL;
long long int var_3 = -4375919962822216423LL;
unsigned long long int var_4 = 5167093942013248269ULL;
signed char var_7 = (signed char)-44;
int var_10 = 398916321;
signed char var_12 = (signed char)56;
signed char var_14 = (signed char)-31;
int var_15 = 1111788407;
int zero = 0;
signed char var_16 = (signed char)-51;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -3574954411489414404LL;
long long int var_20 = -6385996505689553848LL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
