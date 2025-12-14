#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5831952559968294048ULL;
unsigned long long int var_4 = 11686100041622633602ULL;
unsigned long long int var_6 = 9338900325792392689ULL;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-85;
unsigned short var_11 = (unsigned short)16239;
unsigned int var_13 = 2606943901U;
unsigned long long int var_18 = 18314413722564689466ULL;
int zero = 0;
signed char var_19 = (signed char)-41;
short var_20 = (short)-29517;
long long int var_21 = -7468580932402806923LL;
unsigned char var_22 = (unsigned char)74;
unsigned int var_23 = 3056192875U;
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
