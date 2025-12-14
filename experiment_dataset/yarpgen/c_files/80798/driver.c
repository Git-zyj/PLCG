#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -787324890;
int var_9 = -979765844;
int zero = 0;
unsigned char var_17 = (unsigned char)167;
int var_18 = -1239525447;
signed char var_19 = (signed char)-74;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)186;
int var_22 = 971532143;
int var_23 = -885994054;
unsigned char var_24 = (unsigned char)184;
unsigned char var_25 = (unsigned char)125;
int var_26 = 1893797118;
unsigned char var_27 = (unsigned char)222;
_Bool var_28 = (_Bool)0;
short var_29 = (short)26523;
_Bool var_30 = (_Bool)1;
void init() {
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
