#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -914281789;
unsigned char var_3 = (unsigned char)26;
unsigned short var_4 = (unsigned short)5145;
long long int var_5 = 7315836087844761408LL;
unsigned long long int var_6 = 11403862212505076918ULL;
long long int var_7 = 6488101554786151556LL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)22878;
unsigned long long int var_10 = 17908662707683714029ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)8;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
