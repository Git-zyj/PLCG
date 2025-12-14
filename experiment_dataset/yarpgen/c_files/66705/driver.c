#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 10134054704838229267ULL;
long long int var_4 = 3698943738010391009LL;
long long int var_6 = -3988361129531974517LL;
unsigned long long int var_7 = 10318347559852723055ULL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)5569;
unsigned long long int var_10 = 14123714686775280603ULL;
unsigned short var_12 = (unsigned short)56745;
unsigned short var_14 = (unsigned short)25197;
int zero = 0;
unsigned long long int var_16 = 9840420260171131988ULL;
unsigned long long int var_17 = 6492967205771863256ULL;
void init() {
}

void checksum() {
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
