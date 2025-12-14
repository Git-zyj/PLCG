#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)62338;
signed char var_7 = (signed char)18;
unsigned int var_8 = 4241696946U;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)93;
int var_15 = -1342042278;
int zero = 0;
int var_16 = -1421095862;
long long int var_17 = -1379757064573684819LL;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)162;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
