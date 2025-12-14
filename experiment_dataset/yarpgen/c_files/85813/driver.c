#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)252;
short var_3 = (short)-28166;
unsigned char var_5 = (unsigned char)163;
int var_6 = 1450774710;
long long int var_8 = -7059529094204691092LL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_15 = 14359534571058266390ULL;
unsigned char var_16 = (unsigned char)63;
unsigned int var_17 = 3004473736U;
int zero = 0;
unsigned long long int var_19 = 16796763160686312348ULL;
unsigned int var_20 = 2927072891U;
int var_21 = 1512996683;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
