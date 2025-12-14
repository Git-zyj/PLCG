#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44982;
unsigned int var_1 = 2439709021U;
int var_2 = 449971261;
long long int var_3 = -4032138346977640818LL;
short var_4 = (short)-7872;
unsigned long long int var_5 = 5854004598025550905ULL;
unsigned short var_6 = (unsigned short)16259;
long long int var_7 = 3657805295771668781LL;
short var_8 = (short)-12610;
signed char var_9 = (signed char)28;
int zero = 0;
unsigned int var_10 = 2148088269U;
unsigned short var_11 = (unsigned short)16119;
unsigned long long int var_12 = 15303581359489955833ULL;
unsigned short var_13 = (unsigned short)2084;
short var_14 = (short)-17862;
unsigned long long int var_15 = 317363433101200897ULL;
long long int var_16 = -7537832560812822183LL;
long long int var_17 = 6700925170141648373LL;
unsigned short var_18 = (unsigned short)55186;
long long int var_19 = -3219626259541261932LL;
signed char var_20 = (signed char)101;
signed char var_21 = (signed char)74;
long long int var_22 = 1260588145722812768LL;
unsigned int var_23 = 3950057786U;
long long int var_24 = -893327338313501606LL;
short var_25 = (short)-2950;
unsigned long long int var_26 = 10125440628293933102ULL;
signed char var_27 = (signed char)-90;
short var_28 = (short)-8904;
int var_29 = 798221425;
unsigned long long int var_30 = 15407946110047569822ULL;
unsigned short var_31 = (unsigned short)54095;
unsigned short var_32 = (unsigned short)54257;
unsigned short var_33 = (unsigned short)26999;
int var_34 = -1170404642;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
