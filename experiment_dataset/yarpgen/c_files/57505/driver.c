#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-106;
long long int var_3 = 1503286288571693686LL;
unsigned char var_11 = (unsigned char)111;
short var_13 = (short)17554;
unsigned long long int var_14 = 14674456907511580890ULL;
long long int var_15 = -161135077707997754LL;
unsigned int var_16 = 2044752522U;
int zero = 0;
unsigned short var_17 = (unsigned short)35246;
signed char var_18 = (signed char)-118;
long long int var_19 = -880305686275851069LL;
int var_20 = -1213401422;
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
