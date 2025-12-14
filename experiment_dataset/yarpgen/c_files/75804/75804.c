/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, (((((((((1 ? (-2147483647 - 1) : 3626598048508797176))) ? 8126464 : (min(var_14, var_14))))) ? (max(((var_12 ? -1179236039 : 5)), ((max(var_8, 86))))) : 32767)))));
                                arr_13 [i_2] [i_2] [i_2] [i_3] [i_3] = (((((((6042165951670977303 ? 12643102611205266972 : -116)) & var_8))) ? ((max((var_5 && var_12), (-7028846799585760873 - var_6)))) : (((((96 ? 2396978309086950533 : var_14))) ? 12643102611205266966 : ((min(131056, var_12)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_17 -= ((((max(((1 ? var_0 : 144115188075855871)), var_1))) || ((min((1 - var_1), (max(var_12, var_14)))))));
                                arr_20 [i_0] [i_1] [i_2] [i_0] [i_6] = var_15;
                                arr_21 [i_0] [i_0] [i_2] [2] [i_2] = (max((max(((max(1923691669, -1))), var_10)), (1 < 1)));
                                var_18 = 1943148283;
                            }
                        }
                    }
                    var_19 = -2129797571;
                    var_20 += 1;
                    var_21 = ((((((min(-1923691669, var_4)) | (max(var_9, 1))))) ? var_13 : ((min(1, (max(1, var_15)))))));
                }
            }
        }
    }
    var_22 ^= (var_11 ? ((max(var_1, (max(-1273856923, var_14))))) : var_12);
    var_23 = (min(var_23, (((var_9 && ((min(((var_2 ? var_9 : 1)), (var_2 < 10047919085075116420)))))))));
    var_24 ^= (min(var_8, ((-46 ? -59 : 1))));
    #pragma endscop
}
