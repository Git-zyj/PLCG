#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1243728719U;
unsigned char var_2 = (unsigned char)207;
int var_3 = -1152690265;
unsigned int var_4 = 959190006U;
unsigned long long int var_5 = 16663477553278913832ULL;
unsigned long long int var_7 = 7753658061143034774ULL;
int var_9 = 666902904;
unsigned int var_10 = 855197855U;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 2238577853U;
int var_14 = 714434170;
int var_15 = -504649659;
unsigned char var_16 = (unsigned char)162;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
