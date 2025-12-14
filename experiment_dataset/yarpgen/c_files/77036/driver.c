#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3739010488158939271LL;
_Bool var_4 = (_Bool)1;
long long int var_7 = -118750532177983561LL;
unsigned short var_8 = (unsigned short)37041;
short var_9 = (short)-15784;
_Bool var_13 = (_Bool)1;
unsigned short var_17 = (unsigned short)3806;
int zero = 0;
long long int var_19 = -8426701328326046293LL;
unsigned short var_20 = (unsigned short)32330;
long long int var_21 = 8001540652611890627LL;
long long int var_22 = 8754746076078191537LL;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
