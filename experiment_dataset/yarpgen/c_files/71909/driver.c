#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3615295173441212257LL;
long long int var_1 = 511224444734171836LL;
long long int var_2 = 6921757654071027955LL;
long long int var_3 = -1046143473205879227LL;
unsigned short var_8 = (unsigned short)36603;
long long int var_9 = 7943128316387986059LL;
unsigned short var_10 = (unsigned short)20735;
unsigned short var_11 = (unsigned short)27510;
unsigned short var_12 = (unsigned short)1930;
int zero = 0;
unsigned short var_15 = (unsigned short)33688;
long long int var_16 = -2512240838467302653LL;
long long int var_17 = -6178855869969503045LL;
long long int var_18 = -5305962918674544036LL;
unsigned short var_19 = (unsigned short)4482;
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
