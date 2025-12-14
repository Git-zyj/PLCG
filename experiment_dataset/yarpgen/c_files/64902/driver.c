#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-65;
long long int var_2 = 8707858840457891160LL;
signed char var_3 = (signed char)-59;
short var_5 = (short)-32114;
long long int var_6 = 4858000089959286577LL;
int var_8 = -1735622552;
unsigned char var_9 = (unsigned char)15;
unsigned char var_10 = (unsigned char)104;
int zero = 0;
signed char var_12 = (signed char)-4;
long long int var_13 = -6481847805090077090LL;
unsigned char var_14 = (unsigned char)117;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
