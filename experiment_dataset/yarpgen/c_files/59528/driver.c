#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3227346670853438583ULL;
long long int var_2 = -8205002225109836201LL;
short var_3 = (short)4146;
long long int var_4 = 1407601274329820506LL;
short var_6 = (short)-20241;
unsigned int var_8 = 3281036846U;
_Bool var_9 = (_Bool)1;
int var_11 = 1436924444;
signed char var_12 = (signed char)-79;
signed char var_14 = (signed char)-125;
_Bool var_15 = (_Bool)1;
unsigned char var_17 = (unsigned char)151;
signed char var_18 = (signed char)1;
signed char var_19 = (signed char)-35;
int zero = 0;
short var_20 = (short)-18311;
short var_21 = (short)-32181;
signed char var_22 = (signed char)-56;
unsigned long long int var_23 = 4453613694713034472ULL;
unsigned int var_24 = 2938698357U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
