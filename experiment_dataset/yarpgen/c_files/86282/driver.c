#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5976931314789114315ULL;
long long int var_3 = -7541928069244390308LL;
_Bool var_4 = (_Bool)0;
long long int var_6 = 7173468818671387345LL;
long long int var_14 = 5832144945371702356LL;
unsigned char var_17 = (unsigned char)225;
int zero = 0;
short var_18 = (short)-9617;
int var_19 = 1338805630;
short var_20 = (short)2424;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
