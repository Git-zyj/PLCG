/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    arr_8 [i_1] [i_2] = ((-(((arr_7 [i_1] [i_0 - 1] [i_1]) ^ (arr_3 [i_0 + 1] [i_0 + 1])))));
                    arr_9 [i_0] [i_0] [i_0] [i_2 + 1] &= ((((((arr_2 [i_0 - 1]) % (arr_2 [i_0 + 1])))) * ((-5195021675006567749 ? -5195021675006567752 : 5195021675006567752))));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    arr_13 [i_1] [i_1] [i_1] = (((max((arr_5 [i_0] [i_1]), -1824694891)) <= (-14889 % -15542)));
                    var_18 = 12847;
                }
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    var_19 = (arr_0 [0]);
                    arr_16 [i_1] = ((~(((arr_12 [1] [i_4 - 1] [i_0 + 1]) ? (arr_12 [i_0] [i_1] [7]) : -15542))));
                    var_20 = ((arr_2 [i_0]) >> (((((-(arr_3 [3] [10])))) ? var_11 : var_1)));
                }
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    arr_20 [9] [i_1] [i_1] [i_5] = var_16;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_21 = var_11;
                                arr_26 [i_1] [i_1] [1] [i_5] [i_6] [i_7] = var_9;
                                arr_27 [4] [i_1] [2] [i_7] [i_7] = (arr_23 [i_0 - 2] [5] [i_5] [i_1] [i_7] [0]);
                            }
                        }
                    }
                }
                arr_28 [i_1] = ((~(((arr_5 [i_0 - 1] [i_1]) ? 5601392572437183049 : (arr_5 [i_0 + 1] [i_0 + 1])))));
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 8;i_9 += 1)
                    {
                        {
                            var_22 = 96;
                            arr_34 [i_0] [i_1] [i_1] = 16150146436532389295;
                            arr_35 [i_8] [i_0] [i_1] [i_9] = (min(((((var_3 ? -5195021675006567755 : var_5)))), (arr_14 [i_1] [i_0 - 1])));
                            var_23 = ((+(((arr_2 [i_8]) ? (arr_4 [i_8] [i_1]) : ((var_3 ? (arr_0 [i_8]) : 578106986))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_10 = 4; i_10 < 12;i_10 += 1) /* same iter space */
    {
        var_24 = (((((!((min(var_11, var_3)))))) >> ((((~(1369142041 % var_8))) - 2925825232))));
        var_25 = (+(((arr_37 [i_10 + 1] [i_10]) ? (arr_36 [i_10]) : (arr_37 [i_10 - 2] [3]))));
    }
    /* vectorizable */
    for (int i_11 = 4; i_11 < 12;i_11 += 1) /* same iter space */
    {
        arr_40 [i_11] [i_11] = -22811;
        arr_41 [i_11] [i_11] &= ((!(arr_38 [i_11 - 2])));
        arr_42 [i_11 + 4] = 5195021675006567763;
    }
    #pragma endscop
}
