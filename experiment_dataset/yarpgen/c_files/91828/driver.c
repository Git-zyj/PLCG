#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = 9075051519317622939LL;
unsigned long long int var_3 = 18291552887667685295ULL;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)18321;
unsigned int var_6 = 2003989069U;
unsigned long long int var_7 = 461949096727289523ULL;
unsigned int var_8 = 1203558917U;
_Bool var_9 = (_Bool)0;
long long int var_10 = 8101107218170240314LL;
long long int var_11 = 7857722244779199012LL;
unsigned short var_12 = (unsigned short)22127;
long long int var_13 = 3134613832274945301LL;
unsigned short var_14 = (unsigned short)14930;
short var_15 = (short)22255;
unsigned short var_16 = (unsigned short)64763;
int zero = 0;
unsigned short var_17 = (unsigned short)26598;
int var_18 = -706738628;
signed char var_19 = (signed char)-127;
unsigned int var_20 = 377372298U;
unsigned long long int var_21 = 8142257639517938595ULL;
short var_22 = (short)30489;
signed char var_23 = (signed char)25;
unsigned short var_24 = (unsigned short)54802;
unsigned int var_25 = 2876258651U;
unsigned short var_26 = (unsigned short)55135;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
