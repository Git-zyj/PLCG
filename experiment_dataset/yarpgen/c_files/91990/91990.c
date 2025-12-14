/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_11 ? var_14 : var_14));
    var_19 -= ((~((-(max(var_7, var_15))))));
    var_20 -= ((~((min(var_16, var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((min(var_11, ((var_6 ? (arr_0 [i_1]) : var_15)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [2] = arr_10 [i_0] [i_2] [i_0] [i_0];
                            var_22 -= (arr_3 [1] [i_2] [i_2 + 1]);
                            var_23 = (min((max((arr_2 [i_3] [i_3]), var_8)), (((!(arr_0 [i_0]))))));
                            var_24 |= (((((arr_5 [i_0] [i_0] [i_0]) && (((var_2 ? 1 : (arr_1 [i_1])))))) ? ((((var_9 && 1) ? (arr_1 [11]) : (((arr_0 [i_2]) ? (arr_3 [i_0] [i_1] [i_0]) : (arr_1 [i_2])))))) : var_17));
                        }
                    }
                }
                var_25 = (min(var_25, (((var_7 - ((~(max(var_14, 0)))))))));
            }
        }
    }
    #pragma endscop
}
