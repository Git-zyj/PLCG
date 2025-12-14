#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14656699123690785061ULL;
long long int var_2 = -6203438933573418556LL;
unsigned int var_7 = 2509346172U;
unsigned short var_9 = (unsigned short)5681;
unsigned long long int var_10 = 18426776947056276074ULL;
int zero = 0;
unsigned long long int var_11 = 9172828750317829262ULL;
long long int var_12 = -2198881946181818068LL;
unsigned char var_13 = (unsigned char)137;
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
