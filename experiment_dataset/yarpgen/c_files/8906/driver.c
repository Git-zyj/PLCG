#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14336;
unsigned long long int var_2 = 9044144935877612287ULL;
signed char var_3 = (signed char)125;
unsigned int var_7 = 1939443012U;
long long int var_9 = -2212120721270859520LL;
short var_13 = (short)-32057;
unsigned long long int var_14 = 10746803708691957768ULL;
unsigned int var_16 = 3318231100U;
short var_18 = (short)13308;
unsigned char var_19 = (unsigned char)52;
int zero = 0;
unsigned int var_20 = 947544282U;
unsigned long long int var_21 = 5741849716196192378ULL;
long long int var_22 = 7237305514439789051LL;
void init() {
}

void checksum() {
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
