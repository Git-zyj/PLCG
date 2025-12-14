/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92908
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((min((((/* implicit */long long int) max((arr_6 [i_0] [i_1] [i_0] [i_2 - 3]), (((/* implicit */short) arr_1 [i_2]))))), (min((((/* implicit */long long int) arr_1 [i_0])), (arr_8 [i_0] [i_1] [i_2]))))) + (9223372036854775807LL))) << (((((/* implicit */int) max((arr_7 [i_2 + 1] [i_1] [i_2 - 3]), (arr_7 [i_2 + 1] [i_1] [i_0])))) - (65)))));
                    var_18 -= ((/* implicit */int) ((unsigned int) min((min((((/* implicit */unsigned long long int) arr_0 [i_2])), (arr_3 [i_0] [i_1] [i_2]))), (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0]))))));
                }
            } 
        } 
    } 
    var_19 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (min((((unsigned int) var_9)), (var_1)))));
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) var_12)), (((int) 0ULL))));
}
