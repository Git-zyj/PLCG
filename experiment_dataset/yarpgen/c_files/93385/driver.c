#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -1678790553;
int var_6 = -1325771386;
long long int var_7 = -4518272014984790210LL;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3244339684U;
unsigned char var_11 = (unsigned char)51;
int zero = 0;
int var_13 = 11658104;
_Bool var_14 = (_Bool)1;
long long int var_15 = -5456833555045512770LL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
