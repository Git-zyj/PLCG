/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66489
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */int) ((unsigned short) var_7)))))) <= ((-(18446744073709551615ULL)))));
    var_11 &= ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((((4611436101350389650LL) / (((/* implicit */long long int) arr_0 [i_1] [i_0])))) / (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_0] [i_1]), (arr_4 [i_0 - 1] [i_1])))))));
                var_13 ^= (!(((/* implicit */_Bool) min((((unsigned long long int) arr_3 [(unsigned char)2])), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_1])))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */int) min((((/* implicit */short) arr_3 [i_1])), (arr_4 [i_0 - 1] [i_0 + 1]))))))), (((unsigned long long int) arr_0 [i_0 - 1] [i_0 - 1]))));
                var_14 = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) >> (((((/* implicit */int) arr_2 [i_0])) - (1860)))))))));
                var_15 = ((/* implicit */_Bool) max(((~(arr_0 [i_0 - 1] [i_1]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
            }
        } 
    } 
    var_16 |= ((/* implicit */_Bool) var_9);
}
