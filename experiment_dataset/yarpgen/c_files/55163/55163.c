/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = (~-8931226295790869538);
                    arr_9 [i_2] [i_0] [i_0] [i_2] = (arr_4 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, 0));
                                var_18 = (((max(2147483638, 30))) % (min((max(0, (arr_12 [13] [13]))), ((max((arr_11 [i_0] [i_0] [i_2] [i_2] [i_1] [i_0]), 28))))));
                            }
                        }
                    }
                    arr_15 [i_2] = ((((~(arr_8 [i_1 - 1] [i_0 - 1] [i_0 + 2]))) * (!var_7)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_19 = ((-211 ? (arr_6 [i_1 - 2] [i_6 + 1] [i_1 - 2]) : (max((arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1]), (arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                                var_20 = (min(var_20, (((-var_8 * ((((((arr_18 [i_0] [i_0] [i_2] [i_2] [i_2] [i_5] [i_6 + 1]) / var_9))) ? 0 : (68 * 2915970563515154891))))))));
                                var_21 = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_13;
    var_23 = (max(var_23, var_10));
    #pragma endscop
}
