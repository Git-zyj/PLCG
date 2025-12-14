#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 698892493;
unsigned long long int var_7 = 2036676729497032795ULL;
int zero = 0;
long long int var_18 = -9212068013846991498LL;
long long int var_19 = 1237355628867710178LL;
short var_20 = (short)-10109;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
