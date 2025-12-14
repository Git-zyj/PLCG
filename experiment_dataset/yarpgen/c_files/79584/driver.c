#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2818226029953107349LL;
unsigned char var_4 = (unsigned char)210;
unsigned int var_5 = 4042181140U;
signed char var_6 = (signed char)87;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 236743990U;
unsigned char var_11 = (unsigned char)137;
signed char var_12 = (signed char)62;
long long int var_13 = 1355203541567571658LL;
int zero = 0;
long long int var_18 = -8148202004353818549LL;
signed char var_19 = (signed char)89;
unsigned char var_20 = (unsigned char)125;
unsigned short var_21 = (unsigned short)9704;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
