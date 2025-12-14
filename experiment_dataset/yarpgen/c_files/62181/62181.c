/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_6 || var_6);
    var_20 = ((var_8 ? var_5 : var_14));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_18 [i_4] [i_1] [i_2] [i_3] [i_4] [i_2] [i_2] = max(((((4294967287 ? (arr_8 [i_0 - 2]) : var_11)) / (var_14 || var_18))), (min((min(1128128955, var_3)), ((var_14 ? (arr_12 [0] [i_2] [i_3 - 2] [i_4]) : (arr_14 [i_1]))))));
                                var_21 = ((~(min(var_12, (var_11 + -1935058895032601152)))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0] = ((2263378587 ? (((3080943403 || 7522091310598814800) ? var_14 : -5083932565750239470)) : ((((((arr_2 [2] [i_2] [i_1]) % 1128128944)) * (!4294967292))))));
                            }
                        }
                    }
                    var_22 = var_15;
                    var_23 = ((((~(max(var_16, (arr_2 [i_0] [i_0] [i_0 - 3]))))) / -1215476247));
                }
            }
        }
    }
    var_24 = (max(var_24, (((1 || (((~(524287 / var_0)))))))));
    #pragma endscop
}
