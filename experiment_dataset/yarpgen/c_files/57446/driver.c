#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21515;
signed char var_1 = (signed char)89;
signed char var_2 = (signed char)39;
unsigned long long int var_5 = 1391618517957932828ULL;
signed char var_6 = (signed char)91;
long long int var_8 = 1464807031409404752LL;
signed char var_11 = (signed char)14;
unsigned long long int var_12 = 9668923749807140675ULL;
short var_14 = (short)16912;
int zero = 0;
int var_15 = 1661245017;
int var_16 = 470860948;
long long int var_17 = -3930482088064324611LL;
int var_18 = 1950861873;
unsigned char var_19 = (unsigned char)77;
short var_20 = (short)9175;
unsigned short var_21 = (unsigned short)49525;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
