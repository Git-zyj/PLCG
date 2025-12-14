/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    var_20 = (28279 || 83);

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_21 = (var_12 << (((arr_2 [i_0 - 1]) + 156)));
        var_22 = var_3;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_23 = (((((var_3 ? ((var_16 ? 1645380697 : 56)) : 897307823))) | (min(13798902383562467474, 3))));

        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            arr_8 [i_1] [i_1] = (((arr_6 [i_2 + 3] [i_2 + 3]) | (min((arr_6 [i_2 - 1] [i_2 - 1]), (arr_6 [i_2 + 2] [16])))));
            var_24 = ((((max((arr_4 [i_2 - 3] [i_2 - 1]), var_14))) ? (((arr_7 [i_2 - 3]) ? (arr_4 [i_2 - 3] [i_2 + 1]) : var_7)) : (((181700103 << (913657271 - 913657270))))));
        }
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            arr_12 [i_1] [i_3 - 1] [i_1] = (((arr_6 [i_1] [1]) ? var_2 : ((1 - (arr_10 [i_3 - 1] [i_3 + 2])))));

            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_21 [i_1] [i_3 + 2] [7] [i_5] = ((270215977642229760 >= (min(8906497776541689120, (((13798902383562467483 && (arr_10 [11] [11]))))))));
                            var_25 = (max((((!((var_7 <= (arr_0 [i_1])))))), ((1 ? 181700103 : 16))));
                            var_26 = (((((((((arr_16 [i_5] [i_5] [i_3] [i_3]) ? var_3 : 4647841690147084141))) ? var_1 : ((0 ? (arr_3 [i_1]) : -10))))) <= ((+(((arr_2 [7]) ? 118577507935270657 : 1984471698))))));
                        }
                    }
                }
                arr_22 [i_1] [16] [i_1] = (arr_10 [9] [15]);
            }
            var_27 = (min(var_27, 0));
        }
        var_28 ^= (arr_5 [i_1] [i_1]);
        /* LoopNest 2 */
        for (int i_7 = 4; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 17;i_8 += 1)
            {
                {
                    arr_29 [16] [i_7 - 3] = (min(((-(arr_5 [i_7 - 4] [i_7 - 4]))), ((var_12 ? 54733 : 987448280))));
                    arr_30 [i_7] [i_7] [i_8] = (((~var_3) ? ((var_1 ? (~-181700104) : 0)) : var_18));
                    var_29 = (((((((arr_3 [i_7]) ? var_12 : var_3))) ? ((-(arr_1 [i_8]))) : (((arr_28 [i_1] [i_7] [4] [4]) << (var_1 - 2161980647))))));
                }
            }
        }
    }
    #pragma endscop
}
