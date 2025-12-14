#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-114;
unsigned long long int var_3 = 3776539862755557546ULL;
unsigned long long int var_7 = 9582417972371677253ULL;
signed char var_9 = (signed char)-46;
unsigned long long int var_11 = 11499136410696294959ULL;
unsigned long long int var_12 = 14418148910814894682ULL;
unsigned long long int var_14 = 413050420507401282ULL;
signed char var_16 = (signed char)87;
signed char var_19 = (signed char)115;
int zero = 0;
unsigned long long int var_20 = 16109162633309554521ULL;
unsigned long long int var_21 = 6770866489161441555ULL;
unsigned long long int var_22 = 14772264486251135712ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
