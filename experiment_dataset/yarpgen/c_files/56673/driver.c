#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6640449949687871346LL;
signed char var_13 = (signed char)-7;
unsigned long long int var_15 = 10539575456690173105ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)5050;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)174;
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
