#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 2504717812607196869ULL;
int var_14 = 1232736507;
int zero = 0;
unsigned long long int var_17 = 16154179518069573887ULL;
unsigned long long int var_18 = 17491710565507484573ULL;
short var_19 = (short)4682;
void init() {
}

void checksum() {
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
