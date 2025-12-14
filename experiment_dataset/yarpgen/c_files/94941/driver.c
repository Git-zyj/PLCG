#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21247;
unsigned short var_1 = (unsigned short)25180;
unsigned short var_4 = (unsigned short)17610;
long long int var_7 = -2725354424384342115LL;
int var_9 = -1743848031;
int var_10 = -909928922;
int var_13 = -1403721447;
int zero = 0;
unsigned long long int var_15 = 4069254171331682403ULL;
unsigned long long int var_16 = 2784503710612360110ULL;
unsigned short var_17 = (unsigned short)59738;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
