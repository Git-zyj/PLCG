#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7217722513368625711ULL;
unsigned int var_1 = 3523732695U;
unsigned short var_2 = (unsigned short)31330;
int var_4 = -856291595;
int var_5 = -375940749;
unsigned long long int var_7 = 10314740419492399694ULL;
long long int var_8 = -1265150970124117369LL;
long long int var_9 = 4335546963517333154LL;
long long int var_11 = 2956210675329818725LL;
long long int var_12 = -5223675413763543897LL;
unsigned long long int var_13 = 14080456587397192203ULL;
int var_15 = 1074033345;
unsigned int var_16 = 1969642303U;
unsigned char var_17 = (unsigned char)0;
long long int var_18 = 353772346520638410LL;
int zero = 0;
unsigned char var_19 = (unsigned char)38;
unsigned int var_20 = 2904605251U;
short var_21 = (short)-17854;
unsigned long long int var_22 = 1543318806994523754ULL;
long long int var_23 = 6755998775031694564LL;
long long int var_24 = -1075064725244975578LL;
int var_25 = 573305119;
int var_26 = -1069266079;
int var_27 = -174627617;
unsigned long long int var_28 = 7514970007155471702ULL;
unsigned char var_29 = (unsigned char)233;
void init() {
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
