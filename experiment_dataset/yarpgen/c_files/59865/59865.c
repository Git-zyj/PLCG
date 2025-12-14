/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = ((-(((max(var_9, 2603502623)) | (arr_3 [i_1 - 1] [i_1 - 1] [13])))));
                var_16 = ((~(((((((arr_0 [i_0] [i_1 + 1]) ? var_14 : (arr_2 [10])))) && (arr_1 [i_1 + 1] [i_1 - 1]))))));
                var_17 |= (arr_0 [i_0] [i_0]);
                var_18 = min((var_13 - var_13), (~var_6));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_19 = (max(var_19, (((-((((arr_2 [i_1 - 1]) || (95 && var_11)))))))));
                    var_20 = var_12;
                    var_21 *= (((min((min(var_13, (arr_0 [i_1] [i_2]))), var_7)) ^ ((((arr_3 [i_1 - 1] [i_1 - 1] [1]) ? (!1) : ((((arr_4 [i_2]) && 1691464673))))))));
                    var_22 &= var_6;
                    var_23 = 1;
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_24 = (max(var_24, (((-(((arr_0 [i_0] [i_0]) ? ((min(1, var_5))) : (arr_3 [i_1 + 1] [12] [12]))))))));
                    arr_11 [i_0] [i_3] [i_3] = (~(max(var_13, (((~(arr_9 [i_0] [i_0] [4] [i_0])))))));
                    var_25 = (((((((arr_4 [i_1]) ? var_2 : var_7)) < (arr_1 [i_1 + 1] [i_0]))) ? ((((-var_7 && (var_13 <= var_5))))) : ((((arr_8 [i_0] [6]) ? var_13 : var_12)))));
                    var_26 = max(((((((var_4 / (arr_3 [7] [2] [5])))) ? (arr_4 [i_0]) : (arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1])))), (((((var_13 ? var_6 : var_5))) ? (arr_6 [i_1 - 1] [i_1] [i_1 - 1]) : (((arr_7 [1] [i_1 - 1] [i_3] [i_1 + 1]) ^ (arr_4 [i_0]))))));
                    var_27 += 6264163171115750510;
                }
            }
        }
    }
    var_28 = (min((max((~var_4), var_11)), ((((max(var_13, var_7)) & (~1691464673))))));
    #pragma endscop
}
