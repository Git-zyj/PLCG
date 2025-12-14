/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (max(var_16, ((min(((85 ? -32749 : var_0)), (arr_2 [0] [i_1] [i_0]))))));
                arr_4 [i_0] [i_0] = (!var_4);
            }
        }
    }
    var_21 = ((((min((max(var_11, var_15)), var_2))) ? (((32765 & var_2) ? var_6 : (~32744))) : (((var_14 >= (max(var_7, var_15)))))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    arr_11 [i_3] = ((~(arr_2 [i_2] [i_3] [i_4])));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_17 [i_2] [i_3] [i_4] [i_5] [i_3] = var_15;
                                arr_18 [i_3] [i_3] [i_3] [i_5] [i_6] = (arr_8 [i_3]);
                                var_22 = (min(var_22, ((!((max(81, 32767)))))));
                                arr_19 [i_3] [i_3] [i_3] [i_4] [i_3] [i_2] [i_5] = (arr_14 [i_2] [i_3] [i_4] [i_5 - 2] [i_6]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = ((~(((((min(var_0, var_11))) || var_12)))));
    #pragma endscop
}
