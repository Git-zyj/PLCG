#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6991415700686151652ULL;
unsigned char var_3 = (unsigned char)58;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 14100462812885192619ULL;
_Bool var_7 = (_Bool)0;
int var_8 = -1293698422;
unsigned short var_9 = (unsigned short)45543;
signed char var_10 = (signed char)62;
long long int var_11 = -1325216956807110313LL;
_Bool var_12 = (_Bool)1;
long long int var_13 = -107373083746778861LL;
unsigned int var_14 = 4194904433U;
unsigned long long int var_15 = 12244264596257374176ULL;
short var_16 = (short)-21781;
short var_17 = (short)9706;
unsigned char var_19 = (unsigned char)107;
int zero = 0;
int var_20 = -1753988619;
signed char var_21 = (signed char)-123;
short var_22 = (short)4565;
int var_23 = -1428505681;
long long int var_24 = 2692641752836335310LL;
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
