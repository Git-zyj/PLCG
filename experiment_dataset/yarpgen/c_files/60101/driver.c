#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2117476208783802372ULL;
unsigned short var_1 = (unsigned short)44671;
unsigned long long int var_4 = 7566354092650346170ULL;
signed char var_6 = (signed char)21;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)25;
unsigned long long int var_11 = 3098247798650624669ULL;
unsigned char var_12 = (unsigned char)3;
int zero = 0;
unsigned short var_14 = (unsigned short)26685;
unsigned short var_15 = (unsigned short)8771;
unsigned short var_16 = (unsigned short)35617;
signed char var_17 = (signed char)113;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
