#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3730196521800531266LL;
unsigned char var_3 = (unsigned char)91;
_Bool var_5 = (_Bool)0;
long long int var_6 = -726094151359443697LL;
unsigned short var_7 = (unsigned short)36672;
long long int var_8 = -3676999018700465LL;
unsigned short var_9 = (unsigned short)46700;
long long int var_10 = -7284274433613354971LL;
unsigned short var_11 = (unsigned short)53526;
int zero = 0;
signed char var_12 = (signed char)103;
unsigned long long int var_13 = 5994935926701943126ULL;
long long int var_14 = 7812036410596855759LL;
unsigned short var_15 = (unsigned short)43876;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
