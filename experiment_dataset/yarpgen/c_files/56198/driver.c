#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)18;
long long int var_2 = -403662576795247134LL;
signed char var_5 = (signed char)-103;
long long int var_7 = -7652784537317961737LL;
long long int var_8 = 8698200837266740872LL;
unsigned char var_10 = (unsigned char)191;
unsigned char var_11 = (unsigned char)6;
long long int var_12 = -4298816993204711083LL;
unsigned long long int var_13 = 309835504820792648ULL;
unsigned short var_14 = (unsigned short)56910;
long long int var_15 = 3060230866270283221LL;
unsigned char var_16 = (unsigned char)55;
int zero = 0;
unsigned short var_19 = (unsigned short)9222;
unsigned char var_20 = (unsigned char)233;
unsigned short var_21 = (unsigned short)54450;
long long int var_22 = -3532743364759535344LL;
unsigned long long int var_23 = 14271000519158008573ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
