/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [7] [i_2] = (4309898414698357816 ? -84 : (-9223372036854775807 - 1));
                    arr_10 [i_0 - 1] [i_1] [i_2] [i_1] = (max(14136845659011193800, var_3));
                    var_19 = ((((((-2209381891395183918 / -71) ? (arr_1 [i_0 + 1]) : (arr_4 [i_0] [i_0] [i_0])))) ? -113 : (((((arr_0 [i_0]) / var_9))))));
                    var_20 = (((((max((arr_4 [14] [14] [i_2 - 1]), (arr_4 [i_0] [i_2] [i_2 - 1]))))) / ((max(1194129939, 9223372036854775807)))));
                }
            }
        }
    }
    var_21 = ((var_13 << (((max(var_7, ((max(var_12, var_18))))) - 179))));
    var_22 = var_0;
    var_23 = (((~-772201961) / var_0));
    #pragma endscop
}
