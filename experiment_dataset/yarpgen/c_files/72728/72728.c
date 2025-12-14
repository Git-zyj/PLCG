/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (max((max(((1073741823 ? 0 : (arr_5 [i_0] [i_1] [i_2]))), -139822202)), (max(var_8, var_11))))));
                    var_21 = (((((((max(var_19, (arr_1 [i_0] [1])))) ? var_15 : (arr_0 [i_0 + 2] [i_0])))) ? (((((!var_11) != (((arr_3 [i_0] [i_2]) ? (arr_4 [8]) : (arr_3 [i_0] [i_0]))))))) : ((489856325 ? (max(var_12, -32765)) : (((57 ? var_10 : (arr_2 [10] [i_0]))))))));
                    var_22 = (((((-(max((arr_4 [i_0 - 1]), -139822202))))) ? (((-(arr_5 [i_0] [i_0 + 1] [i_2])))) : (((arr_4 [i_0 - 2]) ? ((127 ? (arr_4 [i_1]) : 131)) : (arr_1 [i_0] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_23 = (((((arr_5 [i_2 - 1] [i_1] [4]) ? var_17 : (arr_5 [i_0 + 1] [i_2 + 1] [1]))) + var_17));
                                var_24 = (((((~var_15) ? (arr_2 [i_0] [i_0]) : ((var_0 ^ (arr_3 [i_1] [i_3])))))) ? (arr_5 [i_0 + 1] [i_1] [i_0 + 1]) : (arr_1 [i_1] [11]));
                            }
                        }
                    }
                    var_25 = (((((((min(var_2, (arr_9 [i_2] [i_2] [i_1] [i_1] [i_0])))) ? (max(var_17, var_2)) : ((max(-1665493088, 139822204)))))) ? -139822202 : ((((((arr_6 [i_0]) ? var_1 : (arr_5 [i_0 - 1] [i_1] [11])))) ? (arr_2 [i_0] [i_0]) : ((-(arr_4 [3])))))));
                }
            }
        }
    }
    var_26 = (max(((var_6 ? ((min(var_10, var_9))) : (max(var_1, var_4)))), (min(-2673199131491128538, -139822202))));
    #pragma endscop
}
