#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
short var_5 = (short)16404;
unsigned char var_8 = (unsigned char)169;
signed char var_14 = (signed char)-87;
int zero = 0;
int var_17 = -252571387;
unsigned char var_18 = (unsigned char)84;
signed char var_19 = (signed char)-30;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
