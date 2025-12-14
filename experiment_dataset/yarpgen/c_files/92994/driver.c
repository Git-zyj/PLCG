#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18061413295136865762ULL;
_Bool var_2 = (_Bool)1;
signed char var_6 = (signed char)-29;
unsigned long long int var_9 = 3543925964452402032ULL;
_Bool var_11 = (_Bool)0;
int var_15 = 1062879503;
_Bool var_17 = (_Bool)0;
unsigned int var_19 = 3349871866U;
int zero = 0;
unsigned short var_20 = (unsigned short)32000;
int var_21 = -1439084035;
long long int var_22 = 2804016875891345125LL;
void init() {
}

void checksum() {
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
