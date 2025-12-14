/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (min(165, 87));
    var_11 += 4353086771454070755;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (3897929567 ? 1 : 0);
                var_13 = ((!((!(!0)))));

                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    var_14 += ((4080791465 ? 14093657302255480862 : 14093657302255480861));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                    {
                        var_15 = (arr_1 [i_3] [i_2]);
                        var_16 -= (arr_6 [4] [4] [4] [4]);
                        var_17 += 50;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_18 -= ((arr_6 [i_2 - 3] [i_2 - 3] [i_2 + 2] [i_2 - 1]) - -1);
                        arr_11 [i_2] [i_2] [i_2] = (~4353086771454070753);
                        arr_12 [i_1] [i_1] [i_2 + 2] [i_4] |= (~4353086771454070756);
                    }
                    arr_13 [i_2] = (~var_1);
                    var_19 = (arr_3 [1] [i_2 - 1] [i_2]);
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_20 = (arr_2 [i_1]);
                    var_21 = (5184645049288240233 == var_7);
                    arr_16 [i_0] = (arr_3 [i_0] [i_1] [i_5]);
                    var_22 = (1073741820 > 0);
                }
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    var_23 += -284;
                    arr_20 [i_6 - 1] [i_0] |= (min(((~(arr_8 [i_6 - 1] [i_6 + 1] [i_1]))), (((arr_8 [4] [i_6 - 1] [i_1]) ? (arr_8 [i_6] [i_6 - 1] [i_1]) : (arr_8 [4] [i_6 + 1] [i_1])))));
                }

                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_24 += (!256);
                        arr_25 [i_0] [i_1] [i_8] = (arr_3 [i_0] [i_0] [i_0]);
                    }
                    arr_26 [i_1] = ((((max((arr_1 [i_0] [i_0]), (arr_1 [i_7] [i_1])))) ? (arr_1 [i_0] [i_0]) : (((arr_1 [i_7] [13]) / (arr_1 [i_0] [i_0])))));

                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        arr_29 [i_0] [i_0] [i_0] [i_0] = max(1622214172941270077, 18446744073709551593);
                        arr_30 [i_0] [i_0] [15] [i_0] [i_0] = (((~(arr_4 [i_1] [i_1]))));
                    }
                }
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    var_25 += (arr_10 [i_0] [17] [17] [i_10]);
                    var_26 = (4353086771454070753 ? 91 : (arr_1 [i_1] [i_10]));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    var_27 -= ((arr_4 [i_1] [i_11]) == ((~(arr_23 [i_11] [i_1]))));

                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        var_28 &= (((arr_24 [i_0] [i_1] [i_1]) % (arr_19 [6] [i_11] [1])));
                        arr_40 [12] [17] [i_0] = 212;
                        arr_41 [i_0] [i_1] [i_1] [i_11] [i_11] [i_12] = ((arr_34 [i_12] [i_11] [i_0]) % 4353086771454070755);
                        var_29 = ((6 >= (arr_6 [i_11] [i_11] [i_11] [i_11])));
                    }
                    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                    {
                        var_30 = ((~(arr_17 [i_0] [i_0] [i_0])));
                        arr_44 [14] [i_11] [i_11] [i_0] [16] [i_0] = ((325663044 ? 61 : 3));
                    }
                    for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
                    {
                        var_31 = (arr_3 [i_1] [i_11] [i_1]);
                        var_32 = ((2965626547675875822 & (~var_1)));
                    }
                    var_33 = var_9;
                }
            }
        }
    }
    #pragma endscop
}
