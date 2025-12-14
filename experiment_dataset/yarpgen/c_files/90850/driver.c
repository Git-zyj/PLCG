#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14584673837163375322ULL;
unsigned char var_7 = (unsigned char)110;
unsigned int var_8 = 3738068240U;
unsigned char var_11 = (unsigned char)225;
unsigned long long int var_13 = 14945900520817689549ULL;
unsigned int var_16 = 3991884627U;
int zero = 0;
unsigned char var_17 = (unsigned char)146;
short var_18 = (short)23067;
unsigned long long int var_19 = 17502087004333861431ULL;
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
