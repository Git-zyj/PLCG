#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64028;
unsigned int var_1 = 1512166485U;
unsigned char var_3 = (unsigned char)245;
long long int var_5 = 1218702092587379987LL;
unsigned short var_7 = (unsigned short)23705;
long long int var_8 = -880956098936229262LL;
long long int var_9 = 3754058552264706090LL;
_Bool var_10 = (_Bool)1;
long long int var_11 = 3191951126471296531LL;
short var_12 = (short)-25206;
_Bool var_13 = (_Bool)1;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-15703;
long long int var_18 = -9147279335301562523LL;
int zero = 0;
short var_20 = (short)-16146;
short var_21 = (short)-13661;
unsigned short var_22 = (unsigned short)34111;
short var_23 = (short)-29386;
short var_24 = (short)-26451;
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
