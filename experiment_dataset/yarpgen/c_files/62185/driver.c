#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14257178160573238795ULL;
long long int var_10 = -3656565452508523109LL;
unsigned char var_12 = (unsigned char)104;
unsigned char var_13 = (unsigned char)255;
_Bool var_15 = (_Bool)0;
signed char var_17 = (signed char)-71;
int zero = 0;
long long int var_18 = 947614260921058575LL;
short var_19 = (short)-1577;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)104;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
