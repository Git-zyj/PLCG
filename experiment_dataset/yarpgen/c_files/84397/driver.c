#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7464815158226992149ULL;
int var_2 = -609926515;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 6172789698600376671ULL;
unsigned int var_7 = 3236861275U;
unsigned long long int var_9 = 6535773893542702373ULL;
unsigned int var_10 = 507665587U;
signed char var_13 = (signed char)-61;
short var_14 = (short)-4050;
unsigned char var_15 = (unsigned char)46;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 9552825100574596957ULL;
signed char var_21 = (signed char)-17;
unsigned long long int var_22 = 16417981363222827373ULL;
unsigned long long int var_23 = 4087538171895997440ULL;
void init() {
}

void checksum() {
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
