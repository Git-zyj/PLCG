#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3425929542U;
unsigned char var_2 = (unsigned char)68;
long long int var_3 = -9044909098946250020LL;
unsigned char var_5 = (unsigned char)204;
long long int var_6 = -2951282818419666246LL;
unsigned char var_7 = (unsigned char)204;
unsigned short var_8 = (unsigned short)30155;
unsigned long long int var_9 = 464187319141299115ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)118;
unsigned char var_11 = (unsigned char)56;
int var_12 = 191006015;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
