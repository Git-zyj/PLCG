/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88582
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (var_0)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] |= ((/* implicit */unsigned int) arr_3 [i_1] [(unsigned short)3]);
                var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((~(arr_3 [12U] [i_1]))), (((/* implicit */long long int) ((((/* implicit */int) var_5)) << (((arr_2 [i_1] [(unsigned char)0] [i_0 - 4]) + (3818053933870047756LL)))))))))));
                arr_5 [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned int) max((var_1), (((/* implicit */unsigned char) var_5))));
            }
        } 
    } 
}
