#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15692921467591513087ULL;
short var_6 = (short)18102;
_Bool var_7 = (_Bool)0;
unsigned char var_15 = (unsigned char)18;
int zero = 0;
unsigned int var_19 = 2366431739U;
short var_20 = (short)20730;
unsigned int var_21 = 925036768U;
unsigned int var_22 = 4259044961U;
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
