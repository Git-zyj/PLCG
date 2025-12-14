#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23151;
signed char var_2 = (signed char)44;
short var_3 = (short)-26049;
unsigned short var_4 = (unsigned short)15982;
_Bool var_5 = (_Bool)0;
int var_6 = 1911499993;
long long int var_7 = -3259021704524565002LL;
unsigned short var_8 = (unsigned short)23772;
int zero = 0;
signed char var_10 = (signed char)68;
int var_11 = -248422777;
long long int var_12 = 5806201629582713714LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
