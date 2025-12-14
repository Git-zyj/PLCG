#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)86;
unsigned long long int var_2 = 13237021477999220641ULL;
signed char var_3 = (signed char)89;
unsigned char var_4 = (unsigned char)154;
_Bool var_8 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)-106;
unsigned int var_12 = 2060772013U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
