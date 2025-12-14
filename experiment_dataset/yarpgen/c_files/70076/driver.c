#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)130;
unsigned int var_1 = 2544070487U;
long long int var_2 = 8049935601150100037LL;
unsigned long long int var_3 = 18014589224824172580ULL;
unsigned short var_5 = (unsigned short)32734;
signed char var_8 = (signed char)-25;
_Bool var_9 = (_Bool)0;
int var_10 = 1151849361;
unsigned char var_11 = (unsigned char)139;
signed char var_12 = (signed char)69;
unsigned int var_13 = 403793104U;
unsigned long long int var_14 = 10670696399264831849ULL;
signed char var_15 = (signed char)22;
unsigned int var_17 = 3468570318U;
unsigned int var_18 = 235852025U;
unsigned long long int var_19 = 9597652509751031699ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)132;
unsigned char var_21 = (unsigned char)223;
unsigned int var_22 = 1995386941U;
_Bool var_23 = (_Bool)1;
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
