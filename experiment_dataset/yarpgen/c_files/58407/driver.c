#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7227880612287049951LL;
int var_1 = 743196509;
unsigned char var_2 = (unsigned char)79;
int var_3 = 1657507427;
unsigned long long int var_5 = 15792295210940347812ULL;
unsigned char var_9 = (unsigned char)120;
long long int var_10 = -8566909237350144914LL;
int zero = 0;
int var_11 = -2017276957;
unsigned int var_12 = 3626911607U;
int var_13 = 777226112;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
