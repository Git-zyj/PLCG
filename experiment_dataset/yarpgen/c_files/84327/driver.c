#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17325;
int var_3 = -152238536;
signed char var_5 = (signed char)-101;
unsigned short var_8 = (unsigned short)16356;
int zero = 0;
int var_16 = -526340770;
unsigned short var_17 = (unsigned short)50758;
unsigned long long int var_18 = 5668923252115133410ULL;
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
