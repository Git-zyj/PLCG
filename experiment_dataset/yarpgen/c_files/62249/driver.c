#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8464456031850568845LL;
short var_5 = (short)32308;
long long int var_8 = -273895216308013045LL;
int var_10 = 487564893;
long long int var_15 = 8422986214236741090LL;
int zero = 0;
unsigned long long int var_16 = 16064420872673482650ULL;
long long int var_17 = 180618220268785594LL;
long long int var_18 = -2913419821975027849LL;
void init() {
}

void checksum() {
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
