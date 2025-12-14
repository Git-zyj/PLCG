#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8005588053763264513ULL;
int var_1 = -1047035733;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 8680149808990974247ULL;
long long int var_6 = -3774306844472212973LL;
unsigned long long int var_7 = 4186900223666539300ULL;
long long int var_8 = -2118476349133322663LL;
unsigned long long int var_9 = 8529345963730043527ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)169;
int var_13 = -220888138;
unsigned short var_14 = (unsigned short)56403;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)247;
int var_17 = 1484949872;
unsigned long long int var_18 = 9273580272105301735ULL;
signed char var_19 = (signed char)-97;
signed char var_20 = (signed char)35;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
