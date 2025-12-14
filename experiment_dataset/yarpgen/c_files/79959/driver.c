#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18070859306756940412ULL;
short var_4 = (short)8370;
int var_5 = -131104391;
_Bool var_8 = (_Bool)1;
short var_10 = (short)-16764;
unsigned char var_12 = (unsigned char)129;
unsigned long long int var_13 = 7920446079304585041ULL;
int zero = 0;
long long int var_18 = 7774792703353880024LL;
long long int var_19 = 1705023404923290462LL;
short var_20 = (short)8662;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
