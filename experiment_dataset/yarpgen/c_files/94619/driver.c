#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7578360402613507209LL;
unsigned short var_3 = (unsigned short)555;
long long int var_6 = 7472998499064948771LL;
unsigned long long int var_8 = 10516869162873422873ULL;
int var_11 = -577443400;
unsigned int var_12 = 2132608409U;
int zero = 0;
unsigned long long int var_13 = 511196657411309961ULL;
long long int var_14 = 7816053586664863713LL;
signed char var_15 = (signed char)-4;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
