#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 923249708;
int var_3 = -2110505438;
unsigned char var_4 = (unsigned char)121;
long long int var_5 = -7702895635731437765LL;
short var_6 = (short)-17544;
int var_8 = -108562049;
unsigned long long int var_9 = 7953160473316265673ULL;
unsigned short var_10 = (unsigned short)35353;
unsigned int var_11 = 888255651U;
short var_12 = (short)9939;
int zero = 0;
int var_14 = -1074328301;
unsigned long long int var_15 = 8771348315044491729ULL;
int var_16 = 106555665;
unsigned long long int var_17 = 18353343401613955879ULL;
unsigned char var_18 = (unsigned char)107;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
