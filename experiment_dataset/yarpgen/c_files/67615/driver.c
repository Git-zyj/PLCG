#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1229028454U;
unsigned short var_1 = (unsigned short)20938;
signed char var_2 = (signed char)20;
unsigned char var_3 = (unsigned char)41;
unsigned char var_5 = (unsigned char)217;
unsigned long long int var_7 = 9981926304286148278ULL;
signed char var_9 = (signed char)-33;
int var_10 = -1651318733;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2389281859U;
unsigned long long int var_13 = 11131686756761787637ULL;
int var_14 = 778765816;
short var_16 = (short)17167;
short var_17 = (short)28149;
int zero = 0;
short var_18 = (short)-25090;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)117;
signed char var_21 = (signed char)66;
short var_22 = (short)-9439;
int var_23 = -597092075;
short var_24 = (short)19244;
unsigned int var_25 = 170836836U;
unsigned long long int var_26 = 5846716907853706169ULL;
unsigned short var_27 = (unsigned short)14408;
unsigned char var_28 = (unsigned char)68;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
