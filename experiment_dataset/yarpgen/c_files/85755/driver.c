#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1401631124358411814LL;
unsigned int var_1 = 3948515854U;
int var_2 = -1275725832;
unsigned int var_3 = 3345257833U;
signed char var_4 = (signed char)7;
long long int var_5 = 2602565573482251962LL;
unsigned char var_6 = (unsigned char)63;
unsigned char var_7 = (unsigned char)144;
long long int var_8 = 5481985753957683805LL;
_Bool var_9 = (_Bool)0;
int var_10 = -703195035;
long long int var_11 = -1943333663743653791LL;
long long int var_12 = 3867208274322846068LL;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 3398358303043879605LL;
unsigned int var_16 = 3307272252U;
int var_17 = -1334802339;
unsigned char var_18 = (unsigned char)36;
int zero = 0;
int var_19 = 1424282045;
int var_20 = -903207111;
unsigned int var_21 = 1028819591U;
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
