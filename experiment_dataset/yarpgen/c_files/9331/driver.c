#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11685618404846480140ULL;
unsigned long long int var_3 = 15138540315710519009ULL;
unsigned long long int var_5 = 13122840480260408374ULL;
long long int var_14 = 6895797820144300712LL;
int zero = 0;
short var_20 = (short)-9166;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
