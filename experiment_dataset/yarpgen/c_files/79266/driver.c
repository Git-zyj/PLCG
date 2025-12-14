#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6064164688017212590LL;
unsigned long long int var_6 = 13939324410504226078ULL;
int var_7 = -1670788365;
short var_8 = (short)-26280;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)-26;
long long int var_13 = -8162304306669636853LL;
int zero = 0;
short var_14 = (short)-4599;
short var_15 = (short)1451;
long long int var_16 = 6424373145121876194LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
