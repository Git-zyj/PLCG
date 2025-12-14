#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3356;
unsigned int var_5 = 3245503337U;
unsigned int var_6 = 1128386371U;
signed char var_10 = (signed char)108;
int var_13 = 153219705;
unsigned char var_14 = (unsigned char)219;
int zero = 0;
long long int var_19 = -648651161812691526LL;
int var_20 = 1676026761;
short var_21 = (short)23452;
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
