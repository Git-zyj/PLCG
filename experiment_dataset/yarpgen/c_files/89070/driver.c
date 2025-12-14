#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1787509827530243259LL;
long long int var_4 = -7798712945120844014LL;
int zero = 0;
short var_18 = (short)7524;
unsigned long long int var_19 = 3428008898874030745ULL;
int var_20 = 980695403;
unsigned short var_21 = (unsigned short)5343;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
