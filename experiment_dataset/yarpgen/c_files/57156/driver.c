#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2567420810606773006ULL;
long long int var_7 = -9164082559015782567LL;
unsigned long long int var_16 = 72420142545796580ULL;
int zero = 0;
int var_18 = 1825125281;
short var_19 = (short)6224;
int var_20 = 1534827059;
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
