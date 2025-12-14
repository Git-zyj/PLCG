#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1307522898;
int var_2 = 944574971;
short var_3 = (short)-21529;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)215;
unsigned long long int var_6 = 2520785789714740629ULL;
signed char var_8 = (signed char)67;
unsigned int var_9 = 335897527U;
long long int var_10 = 4899158271980148253LL;
signed char var_14 = (signed char)(-127 - 1);
int zero = 0;
long long int var_15 = -6108331649297285121LL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 130713992U;
unsigned long long int var_18 = 12798684730634418701ULL;
short var_19 = (short)15499;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
