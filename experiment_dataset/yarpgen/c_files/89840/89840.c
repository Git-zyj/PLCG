/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    var_17 = ((((max(1, 1))) << (127 - 100)));
    var_18 = var_13;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_19 = 123;
        var_20 = (min(var_20, ((max(((max(var_1, (arr_0 [i_0 + 1])))), ((~(arr_0 [i_0 - 1]))))))));
        var_21 = ((((max((max(-1, var_14)), (arr_1 [i_0] [i_0])))) ? (!1) : -12823));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_22 = ((!12833) << (((-127 <= (arr_7 [i_2] [i_2])))));
                    var_23 = ((-(-127 - 1)));
                    var_24 = (arr_2 [i_3]);
                }
            }
        }
        var_25 = (!0);
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_26 = ((-12813 ? 1 : 127));
        var_27 = (arr_10 [1]);
        var_28 = ((((var_11 <= (arr_8 [i_4] [i_4] [i_4]))) ? ((((6 >= (arr_6 [i_4] [i_4] [i_4]))))) : (((arr_1 [i_4] [i_4]) ? -var_9 : (!var_15)))));
        var_29 = (!var_15);
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_30 = ((((max(var_9, 1))) ? (arr_15 [i_5]) : (((((7917 >> (arr_12 [i_5])))) ? (((arr_15 [i_5]) ? (arr_12 [i_5]) : (arr_12 [i_5]))) : ((max((arr_15 [i_5]), -1)))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_31 = (min(var_31, ((max(var_4, var_12)))));
                    var_32 = arr_15 [i_5];
                    var_33 = (arr_22 [i_7] [i_6] [i_5]);
                    var_34 = 51011;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_35 = (((arr_27 [i_5] [i_5] [i_5] [i_6] [i_7] [i_6] [1]) || (((51011 ? 198 : var_14)))));
                                var_36 = (min(var_36, ((max(41306, (51011 - 1))))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        var_37 = (arr_32 [i_5] [3] [i_5] [i_12]);
                        var_38 = (min(var_0, ((((arr_29 [22] [i_5]) ? var_13 : (arr_21 [i_5] [i_5]))))));
                        var_39 = ((-((max((arr_31 [i_11 - 1] [i_11 - 1] [i_5]), -7899)))));
                        var_40 *= (arr_32 [8] [i_10] [i_11 - 1] [i_10]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
