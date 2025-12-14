/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    var_15 = (min(var_15, (((+(min((arr_6 [i_0] [i_1] [i_2 + 2]), (arr_6 [i_0] [15] [i_2 + 1]))))))));
                    arr_7 [i_0] [i_0] [i_0] = -623423535;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] = ((-var_1 + ((623423535 ? var_6 : ((var_0 / (arr_13 [1] [i_2] [i_1] [i_0])))))));
                                var_16 = (((3671543761 ? (arr_8 [i_0] [i_2 - 2] [i_3]) : (arr_6 [i_0] [i_2 - 2] [i_2 - 1]))));
                            }
                        }
                    }
                    var_17 -= (var_5 != 3671543761);
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    var_18 = ((122 + (arr_16 [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_5 - 1])));
                    var_19 = (11999 == var_1);
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_20 = (arr_15 [i_7]);
                                var_21 = (min(var_21, (arr_3 [i_0])));
                                arr_23 [i_0] [i_1] [8] [i_5] [i_5] = (((((var_3 ? 623423534 : var_6))) ? -var_1 : (((623423535 + (arr_1 [i_0]))))));
                            }
                        }
                    }
                }
                for (int i_8 = 2; i_8 < 18;i_8 += 1) /* same iter space */
                {
                    var_22 = (arr_6 [i_8 - 2] [i_0] [i_0]);
                    arr_26 [i_0] [13] = ((-12000 ? 623423534 : 0));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 18;i_10 += 1)
                        {
                            {
                                arr_32 [i_0] [i_1] [i_8 + 1] [i_1] [i_1] = var_1;
                                var_23 |= (max((((var_7 % var_5) ? (max(var_3, var_10)) : (((max(var_6, -113)))))), ((~((0 ? var_3 : var_1))))));
                            }
                        }
                    }
                    var_24 -= (min(((var_11 ? (arr_31 [i_0] [i_1] [i_8] [i_8 + 1] [i_8]) : 8933279143730258022)), (arr_31 [i_0] [i_0] [i_8] [i_8 - 1] [i_1])));
                }
                arr_33 [1] [3] [3] |= (min((max((1 != var_7), ((var_8 ? var_7 : (-32767 - 1))))), ((-(((var_3 != (arr_0 [i_0]))))))));
                arr_34 [i_0] = ((0 ? (((!(-1 | var_5)))) : var_0));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 1; i_11 < 16;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_14 = 4; i_14 < 15;i_14 += 1)
                    {
                        var_25 -= (((arr_37 [i_14 + 2] [i_14 + 2]) ? var_13 : var_10));
                        var_26 = (11999 | 2245684350);
                    }
                    for (int i_15 = 1; i_15 < 16;i_15 += 1)
                    {
                        var_27 = (max(var_27, var_5));
                        var_28 = (max(var_28, ((((((+((((arr_46 [i_12 - 1] [i_12 - 1]) < var_10)))))) ? var_10 : (arr_42 [i_12]))))));
                    }
                    var_29 = 2;
                }
            }
        }
    }
    var_30 |= var_5;
    #pragma endscop
}
