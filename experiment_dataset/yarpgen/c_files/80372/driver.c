#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1501;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned char var_6 = (unsigned char)165;
unsigned char var_8 = (unsigned char)11;
signed char var_9 = (signed char)104;
int var_10 = -509837231;
unsigned char var_13 = (unsigned char)121;
long long int var_14 = -4423172458296917198LL;
unsigned char var_15 = (unsigned char)231;
int zero = 0;
signed char var_18 = (signed char)74;
short var_19 = (short)8780;
long long int var_20 = 5728776972302417826LL;
_Bool var_21 = (_Bool)1;
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
