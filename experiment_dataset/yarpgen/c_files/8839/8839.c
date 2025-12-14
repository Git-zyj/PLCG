/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] [12] [i_0] = (((((((~(arr_2 [i_0] [i_1]))) + ((var_6 ? var_0 : var_6))))) ? ((var_8 ? (arr_1 [i_0] [i_1]) : var_9)) : (arr_1 [i_0] [i_0])));
                var_10 ^= ((-(((((min(110, 164))) || 0)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_11 = (max((((arr_6 [i_0] [i_1] [1]) | var_4)), (((((min(164, 92))) ? 91 : -0)))));
                            arr_13 [i_3] = (min((arr_11 [i_0] [15]), ((((var_4 >> (var_3 - 4220696))) - ((max(var_3, 65535)))))));
                            arr_14 [i_0] [i_3] [i_2] [i_3] [10] = ((((var_3 ? var_3 : var_2)) < 65526));
                            var_12 = 3575117778;
                        }
                    }
                }
            }
        }
    }
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            {
                var_14 += (min((!0), 8));
                var_15 = (max(var_15, (((((!(arr_0 [i_5]))))))));
                var_16 = ((((((!(14 >> 0))))) * var_1));
            }
        }
    }
    #pragma endscop
}
