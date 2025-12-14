#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3598772523940625645LL;
int var_3 = 951465804;
int var_8 = 1806751909;
long long int var_10 = -3650350224295725427LL;
unsigned int var_11 = 2939678002U;
unsigned long long int var_12 = 118292236456355953ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_19 = 8380350846829363539LL;
unsigned long long int var_20 = 14539160978435879013ULL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 10771260530016239700ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
