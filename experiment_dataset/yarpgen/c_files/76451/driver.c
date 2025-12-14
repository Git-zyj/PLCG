#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 1523172387394789233LL;
short var_12 = (short)25828;
unsigned long long int var_14 = 15181745315814777800ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_19 = 1230406262;
signed char var_20 = (signed char)-67;
_Bool var_21 = (_Bool)0;
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
