/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((max(((~((3137451226 ? var_0 : 1479773480)))), ((max((~var_10), var_12))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = (((((31 ? (((min(15817, var_16)))) : (((arr_3 [i_0] [i_0] [i_0]) % (arr_3 [i_0] [i_1] [1])))))) ? (max(-15817, ((max(92, 94))))) : var_16));
                var_22 = (max(var_22, (((((92 ^ (arr_2 [5] [i_1]))) ^ (((!(arr_4 [i_0] [i_1])))))))));
                var_23 = (min(var_23, (arr_2 [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
