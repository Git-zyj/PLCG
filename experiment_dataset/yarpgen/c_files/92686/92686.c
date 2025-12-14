/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = var_9;
                    var_20 = ((((!((min(var_4, (arr_5 [i_2] [i_1] [i_0]))))))));
                    arr_7 [8] [i_1] [11] [i_0] = (-(min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1]))));
                    arr_8 [i_0] [i_1] [i_0] = var_4;
                }
            }
        }
    }
    var_21 = (((((var_12 != var_9) | (var_17 * var_3))) << (var_1 - 7375761053209881478)));

    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    {
                        var_22 = ((((min((arr_11 [i_3]), (arr_11 [i_3])))) - (((arr_10 [i_3 + 2]) + var_2))));
                        var_23 = ((var_4 + ((((!(arr_17 [i_3] [i_4] [13] [i_3])))))));
                        var_24 = (min((min((arr_13 [i_4 - 1] [i_3]), var_14)), (((var_2 <= (min(var_13, var_15)))))));
                        var_25 = (((arr_9 [i_3]) ? (min((arr_12 [i_3 + 1]), var_1)) : (var_5 & var_10)));
                    }
                }
            }
        }
        var_26 = (((arr_18 [9] [i_3]) && (arr_18 [i_3 + 1] [i_3 + 2])));
        arr_22 [i_3] = (~3376899228);
        var_27 = ((((arr_9 [i_3]) <= ((((arr_10 [i_3 - 1]) | (arr_13 [i_3] [i_3])))))));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                {
                    arr_28 [i_3] [i_3] [i_8] [i_3] = (!64900);
                    var_28 = (arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
                }
            }
        }
    }
    #pragma endscop
}
