/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_10, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] = (max((((var_4 ? var_3 : (((var_9 ? var_10 : 83)))))), (max(5615547373269280762, (((var_2 ? -319465234 : 208)))))));
                    arr_9 [8] [i_1] [i_2] [8] = 48;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_3] [i_0] = 85;
                                arr_16 [i_3] [i_3] [i_1] [i_3] = 208;
                                arr_17 [i_0] [i_0] [2] [i_3] [i_3] [i_4] [i_4] = 182;
                                arr_18 [i_3] [i_3] [i_2] [i_2] [i_2] = var_5;
                            }
                        }
                    }
                    arr_19 [1] [1] [i_1] [16] = (max(-33, 118));
                }
                arr_20 [i_0] [i_0] [i_1] = var_6;
                arr_21 [i_0] [i_1] [i_1] = ((var_9 ? (max((max(0, var_7)), var_5)) : var_8));

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    arr_26 [i_0] [i_1] [i_1] [i_5] = 23;
                    arr_27 [i_5] [i_1] [i_1] [20] = ((((max(var_2, var_7))) ? ((((min(0, var_7))) ? var_9 : ((319465233 ? var_1 : 36)))) : var_2));
                }
                arr_28 [i_1] [i_0] [i_0] = (min(((62 ? 1 : 177)), var_9));
            }
        }
    }
    #pragma endscop
}
