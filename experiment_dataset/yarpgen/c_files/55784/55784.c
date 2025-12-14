/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (((((arr_2 [i_0]) >= (((arr_1 [9] [i_0]) ? 4294967295 : (arr_0 [i_0] [i_0]))))) && ((((576460752303423487 != 1) ? (124 * 0) : (((arr_0 [i_0] [i_0 - 4]) ? var_7 : 65535)))))));
        var_14 -= ((max(((max((arr_2 [i_0]), (arr_2 [i_0])))), -29055)));
        var_15 = (((+(((arr_0 [i_0] [i_0 - 2]) - (arr_2 [1]))))));
        arr_4 [i_0 - 4] [i_0] = (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> (((0 < ((255 ? 2264509254 : 124)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_2] [6] [i_3] = (min(((((arr_2 [i_2 + 3]) ? (arr_2 [i_2 + 3]) : (arr_2 [i_2 + 3])))), (max((arr_2 [i_2 + 3]), 18014398375264256))));
                        arr_13 [i_2] [i_2] [i_2] [i_1] [i_0 - 1] [i_2] = (min(((((((132 ? (arr_6 [i_1] [i_3]) : (arr_9 [i_0] [i_2] [i_0] [i_3] [i_2])))) ? ((-(arr_11 [i_0] [i_0] [i_2 - 1] [i_3] [7]))) : (arr_9 [1] [i_2] [i_2] [i_2] [6])))), (max((((arr_1 [i_0] [i_0]) ? 18374686479671623680 : (arr_0 [i_1] [i_2]))), ((((arr_2 [i_3]) ? 65535 : (arr_11 [i_0] [i_0] [i_2] [i_3] [i_1]))))))));
                        arr_14 [1] [i_2] [i_3] [i_3] [i_3] = (max(124, 65535));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_16 = (max(1, 2303591209400008704));
        var_17 = (255 % 255);
    }
    for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] [i_5] = ((1 ? 1073741824 : -325139511555404090));
        arr_20 [10] = ((1939500358 ? (((((var_4 ^ (arr_16 [i_5 + 3])))) ? (((arr_15 [i_5] [i_5]) | 262143)) : (((var_8 ^ (arr_15 [i_5 + 2] [i_5])))))) : 22077));
    }
    var_18 = (max(var_18, var_4));
    var_19 = (((-(var_10 | var_2))));
    var_20 = min((-5748223116773126238 + -140), var_13);
    #pragma endscop
}
