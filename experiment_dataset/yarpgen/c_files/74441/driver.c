#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)19329;
unsigned long long int var_6 = 427658766043211927ULL;
long long int var_7 = -7291082813220499947LL;
unsigned long long int var_8 = 10959317243914043430ULL;
short var_10 = (short)-15325;
int zero = 0;
unsigned short var_14 = (unsigned short)57914;
unsigned int var_15 = 4078152277U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
