/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79955
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(((min((((/* implicit */unsigned int) 31744)), (arr_0 [i_0]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -31744))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) 3709992849523227290ULL);
        arr_4 [i_0] = max((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0])))), (((((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0]))) / ((~(arr_1 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_6 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_4)), (((unsigned long long int) -3608245409804862992LL))));
}
