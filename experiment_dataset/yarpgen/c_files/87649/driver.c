#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)112;
signed char var_2 = (signed char)111;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-23682;
short var_6 = (short)9578;
int var_7 = 1185170089;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-7;
int zero = 0;
unsigned char var_11 = (unsigned char)211;
signed char var_12 = (signed char)-80;
void init() {
}

void checksum() {
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
