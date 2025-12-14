#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)228;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 2241167651992917294ULL;
signed char var_4 = (signed char)-12;
unsigned char var_5 = (unsigned char)54;
short var_6 = (short)-16044;
signed char var_7 = (signed char)57;
short var_12 = (short)10749;
int zero = 0;
int var_13 = 614927680;
unsigned char var_14 = (unsigned char)230;
int var_15 = -39579334;
long long int var_16 = 7646317733692529591LL;
unsigned char var_17 = (unsigned char)238;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
