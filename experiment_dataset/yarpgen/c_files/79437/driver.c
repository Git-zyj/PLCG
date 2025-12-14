#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1315489003215011735LL;
unsigned int var_5 = 2521635275U;
_Bool var_6 = (_Bool)1;
long long int var_17 = 3627728999686656255LL;
int zero = 0;
int var_19 = -82394722;
unsigned int var_20 = 1404097224U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
