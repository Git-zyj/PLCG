#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8646073986687782964LL;
unsigned short var_5 = (unsigned short)31419;
_Bool var_6 = (_Bool)0;
int var_7 = -782839815;
short var_8 = (short)4723;
long long int var_9 = 6211173089957982858LL;
long long int var_10 = -1362360850031848819LL;
unsigned short var_11 = (unsigned short)2046;
int zero = 0;
short var_12 = (short)20044;
long long int var_13 = 6969942164243091776LL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)107;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
