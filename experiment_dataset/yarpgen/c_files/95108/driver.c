#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1631269205;
unsigned short var_3 = (unsigned short)12993;
signed char var_6 = (signed char)82;
int var_7 = -1461395633;
long long int var_8 = 5649939660888429656LL;
long long int var_11 = -7544792194753640907LL;
unsigned int var_12 = 2736445969U;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
