#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 634353892520114740ULL;
unsigned char var_1 = (unsigned char)99;
unsigned long long int var_2 = 399236279142368145ULL;
unsigned char var_7 = (unsigned char)172;
long long int var_9 = -253568348392985466LL;
unsigned char var_10 = (unsigned char)52;
int zero = 0;
int var_11 = 1893963825;
int var_12 = -1150579611;
unsigned short var_13 = (unsigned short)50598;
_Bool var_14 = (_Bool)0;
int var_15 = 110389483;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
