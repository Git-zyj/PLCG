#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-37;
int var_4 = -634621207;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 3566891736U;
unsigned long long int var_9 = 14998656798865017747ULL;
int var_15 = 275932336;
int var_16 = -1734037705;
signed char var_17 = (signed char)-70;
int zero = 0;
int var_19 = -1373645682;
unsigned char var_20 = (unsigned char)178;
unsigned char var_21 = (unsigned char)184;
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
