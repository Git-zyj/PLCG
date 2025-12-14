#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -426184164;
_Bool var_2 = (_Bool)0;
unsigned short var_5 = (unsigned short)8449;
unsigned char var_8 = (unsigned char)229;
unsigned char var_13 = (unsigned char)167;
unsigned int var_15 = 3847473819U;
int zero = 0;
long long int var_16 = -6610239690169713052LL;
unsigned long long int var_17 = 3247988908995733677ULL;
unsigned char var_18 = (unsigned char)53;
unsigned char var_19 = (unsigned char)121;
unsigned char var_20 = (unsigned char)240;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
