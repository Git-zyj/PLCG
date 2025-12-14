#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 103902614;
long long int var_2 = 5317224333922678158LL;
unsigned int var_3 = 1906443144U;
unsigned long long int var_4 = 12005404790904285146ULL;
int var_5 = -1003663118;
unsigned int var_6 = 149588216U;
unsigned short var_7 = (unsigned short)22919;
unsigned long long int var_8 = 10742511455636281832ULL;
unsigned short var_10 = (unsigned short)44141;
long long int var_12 = -218650252781285048LL;
unsigned int var_13 = 3889557314U;
short var_14 = (short)-381;
unsigned int var_16 = 3158783405U;
int zero = 0;
unsigned short var_18 = (unsigned short)13593;
int var_19 = -815211417;
int var_20 = 1667168292;
unsigned int var_21 = 2379510772U;
void init() {
}

void checksum() {
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
