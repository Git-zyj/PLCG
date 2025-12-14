/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = (((~368) != (max((arr_1 [i_1]), var_8))));
                var_12 = 0;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                {
                    var_13 |= ((var_0 ? ((max((arr_5 [i_3]), 0))) : ((max((arr_5 [i_4 - 1]), (-32767 - 1))))));
                    var_14 = ((-(arr_1 [i_2 + 1])));
                    arr_15 [i_2] = var_9;
                    var_15 = (min(17592186044415, (((!((max(1, (arr_4 [i_4])))))))));
                }
            }
        }
    }
    var_16 = -1262727008;

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_18 [2] [2] = (arr_6 [i_5] [i_5] [i_5]);
        arr_19 [i_5] = var_7;
        arr_20 [0] [i_5] = ((((306725256 ? (arr_3 [i_5] [i_5]) : (arr_3 [i_5] [i_5]))) * (arr_3 [i_5] [i_5])));
        var_17 = ((-((1 ? ((max((arr_16 [i_5] [i_5]), var_6))) : (3981544824030311374 / 3526033476)))));
        var_18 = var_1;
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                {
                    var_19 = ((~(arr_29 [i_8 + 1] [i_7] [i_6])));
                    arr_30 [9] [1] [0] = var_5;
                }
            }
        }
        var_20 = var_10;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    arr_39 [i_6] [i_6] [i_6] = (((((2892286533 ? (arr_27 [i_9] [i_9] [i_9]) : (arr_27 [i_10] [i_9] [i_6])))) ? (arr_23 [i_6]) : var_0));
                    arr_40 [i_6] [i_6] [i_6] [i_6] = (arr_9 [i_6]);
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        var_21 = (max(var_21, (((-(((0 < (arr_44 [i_11])))))))));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    {
                        var_22 = ((arr_41 [i_13]) | var_5);
                        arr_51 [i_11] [i_12] [i_12] [i_13] [i_12] = ((((!((max(8978, 0))))) ? (max((max(-1, (arr_49 [i_11] [i_11] [i_11] [i_11]))), (!var_5))) : 64952));
                        var_23 |= (((((max(-68, (arr_42 [i_12]))))) + ((-(2 - 1867427595240205277)))));
                        var_24 = (min(((var_5 << (var_2 - 2997788234))), (arr_49 [i_11] [i_12] [i_12] [i_14])));
                        arr_52 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = (((arr_49 [i_11] [i_13] [i_11] [i_11]) ? ((((max(3178, (arr_45 [i_14] [i_11]))) != (~var_1)))) : (var_5 <= -var_8)));
                    }
                }
            }
        }
        arr_53 [i_11] [i_11] = (arr_46 [i_11]);
    }
    #pragma endscop
}
