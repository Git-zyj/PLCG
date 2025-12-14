#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7877083810935538549LL;
unsigned int var_4 = 13285859U;
long long int var_6 = -3079616908303905525LL;
long long int var_7 = 1136908827166685469LL;
unsigned int var_8 = 1731877937U;
unsigned int var_9 = 1212695905U;
int zero = 0;
unsigned short var_10 = (unsigned short)41480;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1952925278U;
unsigned short var_13 = (unsigned short)18881;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
