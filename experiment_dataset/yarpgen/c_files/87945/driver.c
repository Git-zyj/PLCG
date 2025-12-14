#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9313510946043269063ULL;
long long int var_1 = 7597166486998788946LL;
unsigned int var_7 = 2193045313U;
unsigned char var_8 = (unsigned char)129;
unsigned char var_9 = (unsigned char)115;
unsigned int var_11 = 983844651U;
unsigned int var_15 = 2180083391U;
_Bool var_16 = (_Bool)1;
unsigned long long int var_18 = 13609191575931509727ULL;
int zero = 0;
long long int var_20 = 2948408889516429149LL;
unsigned long long int var_21 = 14355809396057883344ULL;
unsigned long long int var_22 = 14727832096646870113ULL;
unsigned long long int var_23 = 2485812626059940893ULL;
void init() {
}

void checksum() {
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
