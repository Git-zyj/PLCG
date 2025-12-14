#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7524404362016093613ULL;
long long int var_3 = -3331602677662906749LL;
unsigned int var_5 = 3883447021U;
unsigned long long int var_7 = 3831135219570364472ULL;
signed char var_8 = (signed char)104;
unsigned short var_10 = (unsigned short)19193;
int zero = 0;
signed char var_13 = (signed char)-29;
unsigned long long int var_14 = 16100724964433425097ULL;
void init() {
}

void checksum() {
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
