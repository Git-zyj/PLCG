#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1369409048807486416LL;
signed char var_2 = (signed char)-37;
short var_3 = (short)26098;
unsigned int var_4 = 3544860645U;
long long int var_7 = -7629885542409189972LL;
signed char var_8 = (signed char)-37;
signed char var_9 = (signed char)-57;
int zero = 0;
long long int var_10 = -8435686803673664199LL;
unsigned int var_11 = 2197573711U;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
