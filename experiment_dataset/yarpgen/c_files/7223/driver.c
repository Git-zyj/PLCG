#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1078779091;
_Bool var_3 = (_Bool)1;
unsigned long long int var_8 = 16760556715621927079ULL;
int var_9 = -1630816763;
int var_11 = -1695227449;
int zero = 0;
unsigned long long int var_14 = 16635220985586860570ULL;
int var_15 = -12641859;
short var_16 = (short)-7638;
unsigned long long int var_17 = 8505086505908196947ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
