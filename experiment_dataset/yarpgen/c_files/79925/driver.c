#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29157;
unsigned short var_7 = (unsigned short)19925;
unsigned short var_10 = (unsigned short)27111;
unsigned char var_14 = (unsigned char)250;
long long int var_19 = 4121483726604562985LL;
int zero = 0;
unsigned long long int var_20 = 7657717840848492703ULL;
unsigned short var_21 = (unsigned short)28695;
unsigned long long int var_22 = 8930317695777008278ULL;
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
