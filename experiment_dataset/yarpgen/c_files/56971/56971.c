/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((min((((arr_3 [2]) ? (arr_3 [2]) : (arr_3 [12]))), ((((arr_3 [1]) != (arr_3 [12])))))))));
                arr_5 [i_0] = ((-((+(((arr_4 [i_1] [i_0]) ? (arr_4 [i_1] [i_0]) : (arr_2 [i_0])))))));
            }
        }
    }
    var_21 = (var_16 ? 125 : ((((min(var_13, var_5))) ? ((max(var_16, 32737))) : var_9)));
    var_22 = var_12;
    #pragma endscop
}
