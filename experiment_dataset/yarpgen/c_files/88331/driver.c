#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5467238124394177286LL;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned char var_7 = (unsigned char)238;
unsigned short var_8 = (unsigned short)23410;
short var_9 = (short)-19856;
short var_11 = (short)5781;
int zero = 0;
long long int var_12 = -2606353352840275951LL;
unsigned char var_13 = (unsigned char)47;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-8;
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
