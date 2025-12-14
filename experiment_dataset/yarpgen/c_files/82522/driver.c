#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1196553233;
int var_3 = 1468342973;
int var_7 = 958856692;
long long int var_11 = 2824791129005320553LL;
int var_14 = -901367848;
int var_15 = -1108970914;
int zero = 0;
long long int var_16 = 2455888441681925668LL;
int var_17 = -663052844;
int var_18 = 1701222004;
int var_19 = -544850932;
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
