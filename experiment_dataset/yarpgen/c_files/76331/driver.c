#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12110608795835406630ULL;
unsigned short var_1 = (unsigned short)13404;
unsigned long long int var_4 = 4023107981136494024ULL;
int var_7 = -1748651463;
long long int var_9 = -6365665706718316504LL;
short var_11 = (short)-28389;
int var_14 = -607374074;
int zero = 0;
short var_16 = (short)-4819;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
