#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18391;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-110;
int var_6 = -1689348957;
short var_8 = (short)20287;
unsigned long long int var_10 = 8599187874331064255ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_16 = 6617664376642997484LL;
unsigned long long int var_17 = 5174412549007694052ULL;
unsigned char var_18 = (unsigned char)76;
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
