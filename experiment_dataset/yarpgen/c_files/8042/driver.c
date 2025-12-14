#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)221;
long long int var_1 = -817282421684039546LL;
short var_7 = (short)20164;
unsigned short var_8 = (unsigned short)10089;
int var_9 = -1292108969;
signed char var_10 = (signed char)110;
int zero = 0;
unsigned short var_11 = (unsigned short)50672;
long long int var_12 = 3852291029966253348LL;
unsigned long long int var_13 = 11938881385924343009ULL;
unsigned char var_14 = (unsigned char)165;
long long int var_15 = 3959660226903237950LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
