#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 252920826198376860ULL;
unsigned long long int var_1 = 10275566063660722243ULL;
unsigned long long int var_3 = 13838563818039132231ULL;
unsigned long long int var_4 = 1307597221800669366ULL;
unsigned long long int var_6 = 15906359766283345835ULL;
unsigned long long int var_7 = 6481380038483653840ULL;
unsigned long long int var_9 = 2311046063416080821ULL;
int zero = 0;
unsigned long long int var_11 = 1363809383279855184ULL;
unsigned long long int var_12 = 16719433148828233706ULL;
unsigned long long int var_13 = 15270284156722851572ULL;
unsigned long long int var_14 = 4181187222844312572ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
