#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1101173916;
short var_1 = (short)-20074;
signed char var_2 = (signed char)-21;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)177;
short var_13 = (short)-28504;
unsigned int var_14 = 3416252056U;
signed char var_15 = (signed char)105;
unsigned int var_16 = 2318540398U;
unsigned int var_17 = 4204385775U;
long long int var_18 = -8486033624643016592LL;
short var_19 = (short)-3735;
int zero = 0;
long long int var_20 = -7054479244629621598LL;
short var_21 = (short)4668;
unsigned char var_22 = (unsigned char)145;
unsigned short var_23 = (unsigned short)62572;
int var_24 = -1803914856;
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
