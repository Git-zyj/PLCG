#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17547;
short var_4 = (short)-5117;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)28;
unsigned char var_11 = (unsigned char)238;
unsigned char var_18 = (unsigned char)145;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -8790864656474853466LL;
unsigned long long int var_21 = 14596991073913736744ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
