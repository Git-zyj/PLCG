#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-54;
_Bool var_2 = (_Bool)1;
long long int var_4 = 1053662527113066841LL;
unsigned long long int var_5 = 17934304420352436025ULL;
signed char var_6 = (signed char)-39;
_Bool var_7 = (_Bool)1;
short var_9 = (short)-4726;
unsigned char var_10 = (unsigned char)222;
long long int var_15 = 6686904630902585399LL;
unsigned char var_17 = (unsigned char)181;
unsigned short var_19 = (unsigned short)3843;
int zero = 0;
signed char var_20 = (signed char)-74;
int var_21 = 1265030241;
int var_22 = -111196979;
unsigned char var_23 = (unsigned char)5;
short var_24 = (short)25029;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
