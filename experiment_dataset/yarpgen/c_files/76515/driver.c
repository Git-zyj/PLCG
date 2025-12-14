#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3542032983448751214LL;
signed char var_3 = (signed char)38;
unsigned short var_5 = (unsigned short)14514;
unsigned short var_8 = (unsigned short)10045;
int var_9 = 593988344;
long long int var_10 = 1229090651050126810LL;
long long int var_14 = 9163087748317684088LL;
short var_15 = (short)-15267;
int zero = 0;
long long int var_17 = -4786754164409982357LL;
unsigned short var_18 = (unsigned short)15055;
unsigned int var_19 = 2807734517U;
long long int var_20 = 4532234503659774170LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
