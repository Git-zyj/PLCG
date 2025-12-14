#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)105;
_Bool var_7 = (_Bool)0;
short var_9 = (short)9013;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)121;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)179;
unsigned long long int var_15 = 2349723964384370904ULL;
signed char var_16 = (signed char)-114;
int var_17 = 1636811977;
unsigned long long int var_18 = 82120529633187292ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
