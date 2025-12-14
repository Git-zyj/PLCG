#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10382;
int var_4 = -1578754411;
unsigned short var_9 = (unsigned short)7550;
long long int var_12 = -148320329045121373LL;
int zero = 0;
unsigned char var_18 = (unsigned char)5;
_Bool var_19 = (_Bool)0;
long long int var_20 = 1254643540644648826LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
