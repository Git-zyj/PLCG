#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25158;
long long int var_1 = -7372025957839796453LL;
long long int var_3 = 6930962240294857162LL;
_Bool var_5 = (_Bool)1;
long long int var_6 = 1632077331785639558LL;
unsigned long long int var_7 = 3173261554867171991ULL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int var_10 = 1114027659;
unsigned long long int var_12 = 15258325701903090471ULL;
unsigned short var_15 = (unsigned short)31531;
unsigned short var_16 = (unsigned short)57787;
int zero = 0;
unsigned long long int var_18 = 7403269484672281778ULL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)46912;
void init() {
}

void checksum() {
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
