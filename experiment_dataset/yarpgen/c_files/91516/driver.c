#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8570243915856798119LL;
signed char var_2 = (signed char)-114;
unsigned int var_3 = 1499697919U;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)48;
unsigned short var_7 = (unsigned short)11399;
unsigned long long int var_10 = 7388335888866423872ULL;
unsigned int var_12 = 3990168113U;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)2877;
int zero = 0;
unsigned long long int var_16 = 11073639208971141388ULL;
unsigned long long int var_17 = 1640978545466259205ULL;
unsigned int var_18 = 1883413123U;
signed char var_19 = (signed char)92;
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
