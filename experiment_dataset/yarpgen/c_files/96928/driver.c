#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 15543963204700072384ULL;
unsigned char var_13 = (unsigned char)5;
unsigned char var_14 = (unsigned char)251;
int zero = 0;
signed char var_17 = (signed char)-103;
_Bool var_18 = (_Bool)0;
long long int var_19 = -8376215060841303162LL;
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
