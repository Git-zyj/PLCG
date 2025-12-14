#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -344278846;
int var_3 = 573012501;
long long int var_5 = -570180200498845308LL;
unsigned int var_6 = 2703926645U;
unsigned int var_7 = 2436007400U;
long long int var_8 = 6047268065922321455LL;
signed char var_11 = (signed char)104;
unsigned int var_12 = 2721513855U;
int zero = 0;
unsigned long long int var_13 = 4982978761906812964ULL;
signed char var_14 = (signed char)-44;
int var_15 = -874573423;
void init() {
}

void checksum() {
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
