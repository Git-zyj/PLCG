#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)10611;
unsigned short var_4 = (unsigned short)33630;
short var_5 = (short)25055;
unsigned int var_11 = 1949777269U;
int zero = 0;
int var_18 = -537101339;
unsigned long long int var_19 = 17003963439690533773ULL;
void init() {
}

void checksum() {
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
