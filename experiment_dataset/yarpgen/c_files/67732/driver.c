#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 668990446212924859LL;
unsigned short var_1 = (unsigned short)53760;
int var_2 = 2139462557;
unsigned long long int var_3 = 10792142175045112433ULL;
unsigned long long int var_4 = 13202557387797714788ULL;
unsigned long long int var_5 = 13674452907560263203ULL;
int var_6 = -1839771773;
unsigned int var_7 = 3832216054U;
short var_8 = (short)9900;
int var_9 = -116890822;
unsigned int var_10 = 1786336890U;
int zero = 0;
int var_11 = -1495665989;
unsigned char var_12 = (unsigned char)8;
unsigned long long int var_13 = 2534807460645544683ULL;
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
