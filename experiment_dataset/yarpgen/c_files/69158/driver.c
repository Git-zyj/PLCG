#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3158678277U;
unsigned int var_1 = 2685628870U;
long long int var_3 = 8492559450216232495LL;
unsigned long long int var_7 = 16349650003684602060ULL;
int var_10 = 1473536382;
short var_16 = (short)-8009;
int zero = 0;
int var_19 = -1930881290;
unsigned short var_20 = (unsigned short)7072;
unsigned char var_21 = (unsigned char)171;
long long int var_22 = 304831134756047531LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
