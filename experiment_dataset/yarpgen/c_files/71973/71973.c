/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [1] = ((var_8 * (max(((4118153646564668567 - (arr_2 [i_0]))), (((var_17 ? var_6 : var_1)))))));
        arr_5 [i_0] = arr_1 [i_0];
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_19 = (max(var_19, (((((arr_0 [i_1]) ? (arr_2 [6]) : (min(29, var_7))))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_20 += (arr_13 [i_1] [i_4] [i_3] [i_4]);

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_19 [i_4] [i_2] [i_2] [6] [i_5] &= max((min((((arr_15 [0] [i_1] [i_3] [i_4] [i_5]) ? 2139095040 : 10164052701538056905)), ((max(var_0, (arr_1 [i_1])))))), (min(var_2, var_11)));
                            arr_20 [i_2] [i_2] [i_3] [2] [3] [i_5] [i_2] = (max((arr_17 [i_1] [i_1] [i_3]), ((((((arr_18 [10] [i_4] [1] [1]) / 31))) ? 1 : (arr_1 [i_1])))));
                            var_21 = ((~((max(224, 138)))));
                        }
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            var_22 = (min(var_22, ((max(((var_8 ? 14236308116705397615 : (arr_16 [i_6 + 1] [i_2] [i_2] [i_4] [i_6] [i_3] [i_2]))), (((var_15 ^ var_6) ? ((min(3349186624, var_17))) : (min(var_2, var_11)))))))));
                            arr_23 [i_4] &= ((max((((arr_1 [i_3]) ? 2145541774376680411 : 4171725626278027401)), (((50 >> (8282691372171494726 - 8282691372171494705)))))) >> (((((arr_22 [i_4] [i_6 + 1] [i_6] [i_6 + 1] [i_4]) + (min(-32751, 9239496042451213093)))) - 9239496042451213160)));
                        }
                    }
                }
            }
        }
        var_23 = (max(var_23, ((((~var_0) ? ((min((~var_15), ((min((arr_14 [i_1] [i_1] [4] [i_1]), (arr_7 [i_1] [i_1]))))))) : (min(((min(59, (arr_22 [i_1] [i_1] [i_1] [i_1] [6])))), (arr_10 [i_1] [i_1] [i_1] [i_1]))))))));
        var_24 = ((~((25 ? 25485 : 157))));
    }
    var_25 = var_3;
    #pragma endscop
}
