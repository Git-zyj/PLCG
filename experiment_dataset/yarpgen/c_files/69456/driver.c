#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3420792282909799230LL;
short var_1 = (short)9035;
long long int var_2 = -3377157456626287228LL;
short var_4 = (short)-10101;
unsigned char var_5 = (unsigned char)202;
int var_6 = 375541823;
unsigned char var_7 = (unsigned char)161;
int var_8 = 1939264574;
unsigned int var_9 = 2183745944U;
int zero = 0;
long long int var_10 = 5280034999347184037LL;
_Bool var_11 = (_Bool)1;
int var_12 = -1149449018;
signed char var_13 = (signed char)80;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
