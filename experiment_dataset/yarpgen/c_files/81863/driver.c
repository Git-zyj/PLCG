#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7023453754240748532LL;
signed char var_3 = (signed char)-64;
long long int var_4 = -1158940697350735281LL;
_Bool var_5 = (_Bool)0;
int var_6 = 1415058398;
int zero = 0;
short var_10 = (short)5136;
short var_11 = (short)15860;
unsigned short var_12 = (unsigned short)1083;
signed char var_13 = (signed char)-90;
unsigned char var_14 = (unsigned char)56;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
