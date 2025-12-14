#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6427875967070776675LL;
long long int var_2 = -194802898618737637LL;
long long int var_8 = -798120927596703449LL;
short var_9 = (short)-20525;
int var_12 = -192755836;
short var_16 = (short)7260;
short var_17 = (short)32723;
int zero = 0;
int var_20 = 1447982332;
short var_21 = (short)19038;
short var_22 = (short)-5363;
void init() {
}

void checksum() {
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
