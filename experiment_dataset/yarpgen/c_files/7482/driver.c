#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_4 = -6926480984671472160LL;
int var_5 = -1070025489;
signed char var_8 = (signed char)78;
unsigned short var_9 = (unsigned short)25307;
int var_11 = -1328157715;
int var_13 = -796728609;
int zero = 0;
long long int var_19 = 6975472358546518464LL;
unsigned short var_20 = (unsigned short)21358;
long long int var_21 = -404359078774526595LL;
signed char var_22 = (signed char)-96;
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
