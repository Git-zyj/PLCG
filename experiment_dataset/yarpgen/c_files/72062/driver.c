#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)106;
signed char var_3 = (signed char)88;
unsigned short var_4 = (unsigned short)5648;
short var_5 = (short)-20947;
_Bool var_7 = (_Bool)0;
long long int var_10 = 4690080447197555332LL;
unsigned long long int var_13 = 15956964165015467914ULL;
long long int var_14 = -8864491719722423523LL;
int zero = 0;
unsigned char var_16 = (unsigned char)52;
signed char var_17 = (signed char)-11;
long long int var_18 = -7550914585789432564LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
