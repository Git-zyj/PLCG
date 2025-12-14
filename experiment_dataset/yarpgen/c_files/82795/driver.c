#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)78;
long long int var_2 = 7903621065347005207LL;
short var_4 = (short)-22907;
int var_5 = -838498964;
long long int var_6 = 1747980456427754873LL;
signed char var_7 = (signed char)84;
int var_9 = -1979688452;
short var_10 = (short)-21392;
int var_12 = -548644212;
short var_13 = (short)27546;
long long int var_14 = -1297433876782040309LL;
signed char var_15 = (signed char)-74;
int zero = 0;
short var_16 = (short)32588;
int var_17 = -659601149;
long long int var_18 = -9065845696103050343LL;
long long int var_19 = 2410020043500967041LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
