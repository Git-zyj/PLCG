#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49904;
unsigned short var_3 = (unsigned short)52368;
long long int var_9 = -2119822806633802687LL;
long long int var_10 = -5906405416551913115LL;
unsigned long long int var_11 = 5804752680760462861ULL;
long long int var_13 = 6033955902808042419LL;
int zero = 0;
unsigned long long int var_15 = 15289001246082429505ULL;
unsigned short var_16 = (unsigned short)9828;
unsigned short var_17 = (unsigned short)46195;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
