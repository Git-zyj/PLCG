#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -398220931;
int var_1 = -429081535;
short var_2 = (short)-13738;
long long int var_3 = -875885996147863132LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 11415552027547662930ULL;
int var_6 = -64835107;
int var_7 = -959636917;
unsigned char var_8 = (unsigned char)136;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_10 = (short)29528;
_Bool var_11 = (_Bool)1;
long long int var_12 = 1619017095984049873LL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 9469635310908691697ULL;
short var_15 = (short)1617;
unsigned long long int var_16 = 10061997847291298407ULL;
unsigned short var_17 = (unsigned short)21414;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-25389;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
