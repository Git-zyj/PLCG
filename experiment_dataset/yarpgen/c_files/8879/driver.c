#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)10;
unsigned int var_2 = 3009256926U;
short var_3 = (short)26137;
short var_5 = (short)-21281;
unsigned long long int var_9 = 12097900307900349482ULL;
int var_11 = 362677189;
unsigned long long int var_13 = 13470677269623766890ULL;
unsigned int var_14 = 2529200345U;
short var_15 = (short)-2417;
int zero = 0;
long long int var_16 = -5495669136268128871LL;
signed char var_17 = (signed char)60;
long long int var_18 = -6403168762959056907LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
