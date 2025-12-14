#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)5534;
int var_5 = -1249477091;
short var_6 = (short)22794;
short var_11 = (short)-14740;
short var_12 = (short)29104;
int zero = 0;
unsigned long long int var_14 = 1554157549604570110ULL;
unsigned long long int var_15 = 6039409960582737563ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
