#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -638786832878884570LL;
short var_1 = (short)-7003;
unsigned long long int var_2 = 15055325678982085098ULL;
unsigned int var_3 = 875732893U;
unsigned char var_7 = (unsigned char)84;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)152;
unsigned long long int var_10 = 4240908521827076991ULL;
unsigned short var_12 = (unsigned short)15349;
_Bool var_13 = (_Bool)0;
long long int var_14 = 4786530995911339551LL;
unsigned int var_15 = 133152815U;
int zero = 0;
int var_16 = -280100167;
_Bool var_17 = (_Bool)1;
short var_18 = (short)14386;
long long int var_19 = 1967530235967864465LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
