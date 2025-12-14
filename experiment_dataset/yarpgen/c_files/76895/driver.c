#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1986583304278272261LL;
unsigned int var_1 = 63369305U;
unsigned long long int var_9 = 9098998322867349378ULL;
unsigned long long int var_11 = 1635628400768867969ULL;
long long int var_12 = 5593740265351676489LL;
int zero = 0;
unsigned char var_18 = (unsigned char)245;
long long int var_19 = 3096109965512642273LL;
int var_20 = 1476580578;
int var_21 = 1737018849;
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
