#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)197;
signed char var_7 = (signed char)61;
unsigned long long int var_8 = 12832155472913686963ULL;
unsigned int var_10 = 4015697516U;
int var_11 = 1914041507;
unsigned int var_12 = 3334864744U;
int var_18 = 1403871101;
long long int var_19 = -7101213711591566523LL;
int zero = 0;
unsigned char var_20 = (unsigned char)245;
unsigned int var_21 = 2211020256U;
signed char var_22 = (signed char)-41;
_Bool var_23 = (_Bool)0;
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
