#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1107285828300704191ULL;
long long int var_5 = -624419074456800977LL;
unsigned long long int var_9 = 14424029690114569302ULL;
unsigned char var_10 = (unsigned char)128;
unsigned long long int var_12 = 4543288380806877267ULL;
long long int var_15 = 3750586489223938782LL;
int zero = 0;
unsigned long long int var_18 = 3517087850066583063ULL;
short var_19 = (short)-10379;
long long int var_20 = 5619103827800129427LL;
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
