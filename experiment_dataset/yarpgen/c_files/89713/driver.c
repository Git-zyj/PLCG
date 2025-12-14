#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 624383756601190381LL;
int var_3 = -856158365;
long long int var_5 = -3886518357654596487LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_17 = 2272064777449769187LL;
unsigned short var_18 = (unsigned short)62569;
void init() {
}

void checksum() {
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
