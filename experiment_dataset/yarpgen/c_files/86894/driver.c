#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -1653330464669524717LL;
long long int var_6 = 8559212627301260441LL;
int var_9 = -334025257;
unsigned long long int var_11 = 8061222538698193391ULL;
int var_15 = 1292729395;
int zero = 0;
long long int var_19 = 3049085013634945901LL;
signed char var_20 = (signed char)115;
unsigned char var_21 = (unsigned char)5;
short var_22 = (short)7143;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
