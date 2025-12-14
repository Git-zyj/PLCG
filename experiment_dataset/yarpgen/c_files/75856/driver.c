#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 110614818128636429LL;
unsigned char var_3 = (unsigned char)217;
signed char var_7 = (signed char)19;
long long int var_11 = 1637053269295538137LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 9215211601344466972LL;
void init() {
}

void checksum() {
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
