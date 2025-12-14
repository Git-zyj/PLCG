/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = (((((arr_5 [i_0 - 3] [i_0 + 1] [i_0 - 2]) ? -32759 : var_10))) ? -103 : 1353594877);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [6] [6] [i_3] [i_0] &= ((((65534 ? ((1 ? -12419 : 2941372433)) : -1846513128)) | (((1353594892 ? var_10 : (arr_3 [i_0] [i_2 - 1]))))));
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] = arr_4 [i_3] [i_2];
                            var_15 -= arr_7 [i_0 - 3] [i_1] [i_1] [i_0 - 3];
                        }
                    }
                }
            }
        }
    }
    var_16 = var_8;
    var_17 |= ((max((min(var_9, var_13), ((1353594883 ? var_12 : var_9))))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 13;i_6 += 1)
            {
                {
                    var_18 *= (~12);
                    arr_19 [i_6] [i_6] [i_6] = (arr_14 [i_4]);
                    var_19 = (max((max(var_9, var_13)), -6349));
                    arr_20 [i_6] [i_6] = var_10;
                }
            }
        }
    }
    #pragma endscop
}
