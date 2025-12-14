/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(((min(var_10, 1))), var_2))) ? var_3 : ((min((min(var_12, var_9)), (min(var_1, 1)))))));
    var_19 = ((((max(var_11, ((1 ? var_1 : 1))))) ? (var_15 + var_13) : ((max(var_10, (min(1, -1951117133)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_20 = (min(((((min((arr_5 [i_0] [i_0] [i_2 + 2]), 1))) ? -192011115 : (((arr_6 [i_0] [i_1] [i_1] [i_1]) / (arr_4 [i_0] [i_2] [i_2 + 1]))))), (min((1 * 1), var_15))));
                    var_21 -= (arr_3 [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    var_22 = ((var_10 / (max(var_11, (max(var_8, 3605))))));
    #pragma endscop
}
