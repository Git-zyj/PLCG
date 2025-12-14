/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_18 -= var_7;
                        var_19 = var_15;
                        var_20 = (arr_5 [i_1] [i_1] [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_21 = (((arr_5 [i_0 - 1] [i_0] [i_0 + 2]) ? (max((arr_5 [i_0 + 2] [9] [i_0 + 1]), var_9)) : (max((arr_5 [i_0 - 1] [6] [i_0 - 2]), var_0))));
                        var_22 = 96066328;
                        arr_11 [3] [i_2] [i_2] [i_1] [17] [17] = 7;
                        var_23 = (arr_3 [4]);
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_24 ^= ((!(((-(min((arr_5 [i_0] [i_0] [2]), var_2)))))));
                        arr_14 [10] [14] [i_0 - 1] = ((((((arr_13 [i_0 + 1] [i_5] [i_0 + 1]) ? var_15 : (arr_7 [i_0 - 1])))) ? (arr_6 [i_0 + 1] [9]) : (max((arr_7 [i_0 + 2]), (arr_2 [i_0 - 3])))));
                    }
                    var_25 -= (max((min((arr_2 [i_0 - 4]), (arr_2 [i_0 - 1]))), (min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 4])))));
                    var_26 = (max(var_26, (((max(2147483647, var_9))))));
                }
            }
        }
    }
    var_27 = ((var_8 ? ((max((-2147483647 - 1), (((4294967295 ? 7 : 4420)))))) : (((((var_16 ? var_8 : var_13))) ? (!var_2) : (max(var_4, var_14))))));
    #pragma endscop
}
