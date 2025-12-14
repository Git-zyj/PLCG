#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)16;
unsigned short var_1 = (unsigned short)51264;
signed char var_2 = (signed char)23;
unsigned short var_4 = (unsigned short)49304;
unsigned int var_5 = 765657072U;
unsigned long long int var_6 = 12882422469907280268ULL;
int var_7 = 1838842831;
short var_8 = (short)3922;
short var_9 = (short)-190;
unsigned long long int var_10 = 4877400946779129232ULL;
signed char var_11 = (signed char)-62;
short var_12 = (short)-10579;
int var_13 = 1662308106;
signed char var_14 = (signed char)-126;
int zero = 0;
signed char var_15 = (signed char)98;
signed char var_16 = (signed char)-51;
unsigned int var_17 = 4045219176U;
unsigned int var_18 = 1221453913U;
unsigned long long int var_19 = 15377879962561377341ULL;
unsigned short var_20 = (unsigned short)18879;
unsigned int var_21 = 4050262819U;
unsigned char var_22 = (unsigned char)227;
unsigned int var_23 = 606155789U;
unsigned short var_24 = (unsigned short)61683;
int var_25 = 945470828;
short var_26 = (short)-11079;
unsigned int var_27 = 2976504973U;
unsigned int var_28 = 2966570009U;
unsigned long long int var_29 = 3605829594614390891ULL;
signed char var_30 = (signed char)4;
unsigned short var_31 = (unsigned short)28079;
signed char var_32 = (signed char)-87;
unsigned long long int var_33 = 16345611649602923689ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
