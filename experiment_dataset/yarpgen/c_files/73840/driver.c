#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5696026293761110491LL;
unsigned long long int var_1 = 13716780386726842634ULL;
unsigned short var_2 = (unsigned short)10603;
long long int var_4 = 8814200485763362359LL;
unsigned short var_6 = (unsigned short)35862;
long long int var_8 = -126702451793898628LL;
_Bool var_9 = (_Bool)0;
long long int var_12 = -3203568155010083151LL;
int zero = 0;
unsigned short var_14 = (unsigned short)27885;
_Bool var_15 = (_Bool)1;
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
