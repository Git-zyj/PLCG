#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_4 = 4000208129U;
unsigned char var_5 = (unsigned char)87;
unsigned char var_6 = (unsigned char)219;
unsigned char var_7 = (unsigned char)14;
_Bool var_8 = (_Bool)0;
int var_9 = 1387725147;
unsigned int var_12 = 1289360221U;
long long int var_13 = -1913804653655681951LL;
long long int var_14 = -5667673147550044246LL;
unsigned long long int var_15 = 10123038675956901413ULL;
int zero = 0;
unsigned int var_16 = 1323316636U;
unsigned long long int var_17 = 5537466499518687681ULL;
int var_18 = 329249550;
unsigned char var_19 = (unsigned char)29;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
