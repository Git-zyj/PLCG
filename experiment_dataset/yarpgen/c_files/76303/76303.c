/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_8, (((-7811591321382829209 ? -7811591321382829229 : var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = (((arr_3 [i_1 + 1] [i_1 - 1]) ? (arr_4 [i_1 - 1] [i_1 + 1] [i_1 - 1]) : ((-(arr_1 [i_1 + 2] [i_1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = (var_11 & var_5);
                                var_18 = (arr_8 [3] [i_1 + 3] [5] [5] [11]);
                                var_19 += ((~177) ? ((-626064366713845094 ? var_5 : 626064366713845093)) : var_6);
                                var_20 = ((((max(839866018, 626064366713845093)) / (((min(17, (arr_12 [i_0] [i_0] [10] [i_0] [i_2] [1] [i_4]))))))));
                                var_21 = (max(var_21, ((((arr_8 [i_4] [i_3] [7] [i_1 + 3] [i_0]) ? (arr_9 [11] [i_3 - 1] [i_1 + 3] [i_1 + 1]) : ((-(arr_9 [i_0] [i_1 - 2] [i_3 + 1] [i_3 + 1]))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_19 [i_6] [i_0] [i_1 + 3] [i_6] = ((626064366713845101 ? -7811591321382829229 : 2534994014142603624));
                            var_22 = (min(var_22, (((((((arr_12 [i_0] [i_5] [4] [i_0] [i_6 - 1] [i_1 - 1] [i_0]) ? (arr_12 [i_0] [12] [12] [i_6] [i_6 - 1] [i_1 - 2] [15]) : (arr_12 [1] [6] [i_5] [i_6] [i_6 - 1] [i_1 - 1] [i_6 - 1])))) < (max(184, var_6)))))));
                            arr_20 [i_6] [i_5] [i_1 + 1] [i_6] = arr_7 [2] [i_5];
                            arr_21 [i_0] [i_0] [1] [i_6] = 32760;
                        }
                    }
                }
            }
        }
    }
    var_23 = (-127 - 1);
    var_24 ^= var_11;
    var_25 ^= (max((min(((max(var_14, var_9))), ((var_3 ? var_9 : 4470407918132869338)))), (((((min(var_0, 0))) ? -7811591321382829194 : var_3)))));
    #pragma endscop
}
