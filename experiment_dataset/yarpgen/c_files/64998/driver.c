#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-101;
unsigned long long int var_14 = 13591203419001301362ULL;
signed char var_15 = (signed char)60;
int zero = 0;
short var_17 = (short)-26798;
signed char var_18 = (signed char)113;
unsigned long long int var_19 = 2539241901062056100ULL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
