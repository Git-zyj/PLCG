/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((min(var_5, ((var_1 ? 23 : 8806138937676008559)))), (((~((var_8 ? var_14 : 50746)))))));
    var_19 = (max((((39 - var_17) ? ((max(40, var_2))) : ((6628321998489389183 ? 32389 : -779740603)))), ((min(var_1, (min(40063, 36461)))))));
    var_20 = ((var_0 ? var_14 : ((var_3 + (var_8 * var_12)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] &= ((-(((((15 ? (arr_1 [i_0]) : var_17))) ? (~var_11) : (min((arr_0 [i_0]), (arr_1 [i_0])))))));

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            var_21 = (max(var_21, (arr_4 [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_1] [12] [i_2] [i_1] = max(3737920038776988413, 182166568);
                        arr_13 [i_0] [i_1] [i_1] [i_3] [i_1] [i_3] |= arr_3 [16] [i_1];
                        var_22 -= (((arr_4 [i_0] [i_2]) ? ((-(arr_0 [i_1 + 1]))) : ((min(((max(93, (arr_6 [i_3] [i_2] [i_0])))), (((arr_1 [i_3]) ? (arr_9 [i_0]) : (arr_6 [i_3] [i_2] [i_0]))))))));
                        var_23 = (max(var_23, ((max(((max((((!(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))), (max(-14407, 14789))))), 14407)))));
                    }
                }
            }
            var_24 = (arr_3 [i_0] [i_1]);
        }
        arr_14 [i_0] = (max(((~(arr_9 [i_0]))), (((arr_9 [i_0]) ? (arr_9 [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0])))));
    }
    var_25 = (min(((((((var_7 ? var_11 : 39))) ? ((var_7 ? var_15 : var_13)) : 1541166242))), (max(var_0, var_13))));
    #pragma endscop
}
