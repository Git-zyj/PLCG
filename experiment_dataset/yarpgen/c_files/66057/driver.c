#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50494;
short var_3 = (short)2465;
unsigned int var_4 = 3287729794U;
unsigned short var_5 = (unsigned short)46621;
int var_7 = -743132834;
unsigned short var_8 = (unsigned short)40286;
int var_9 = -744201015;
long long int var_10 = 1111838408741166838LL;
unsigned long long int var_11 = 14863083069440289390ULL;
long long int var_12 = 6728804741432486943LL;
signed char var_13 = (signed char)-31;
unsigned int var_14 = 570386869U;
unsigned char var_15 = (unsigned char)176;
int zero = 0;
signed char var_17 = (signed char)-6;
int var_18 = 1217226204;
unsigned int var_19 = 187069109U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
