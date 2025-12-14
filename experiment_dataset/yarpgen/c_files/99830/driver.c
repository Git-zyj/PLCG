#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
unsigned char var_1 = (unsigned char)214;
long long int var_4 = 7622397214303811555LL;
int var_5 = -1963189976;
unsigned char var_7 = (unsigned char)86;
int zero = 0;
unsigned char var_12 = (unsigned char)195;
long long int var_13 = 6011628830682903594LL;
int var_14 = 448558406;
unsigned long long int var_15 = 2432251685773281135ULL;
unsigned long long int var_16 = 3867229031907108851ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
