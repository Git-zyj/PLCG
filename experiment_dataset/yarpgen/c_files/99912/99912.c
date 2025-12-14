/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(max((var_3 < var_2), (min(var_13, 12725))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (-var_2 ^ var_8);
        arr_3 [i_0] = var_7;
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            var_16 = (max(var_16, 1));

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_17 [i_1] [i_2] = (min(49152, (((arr_12 [i_2]) ? ((var_10 ? 3456453461 : -10709470454987717)) : -3416))));
                            arr_18 [i_2] = 4294967295;
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_22 [4] [1] [i_3] [5] [i_6] [i_2] = (((arr_12 [i_2]) >= (max(var_0, (arr_0 [i_1 - 1])))));

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_25 [i_1] [2] [i_2 + 2] [i_2] [7] [9] = (max(55407, ((min((!49152), (881687736434318731 != 18127359474475173828))))));
                        var_17 = ((!(((~((var_13 ? var_2 : var_12)))))));
                    }
                    arr_26 [i_3] [i_2] [6] [i_6] [i_2] [i_6] = ((max((max(var_11, var_5)), -7)));
                    arr_27 [i_2] [10] [i_2] = ((((max(5, 847930925))) ? 1 : (!1562882363)));
                    var_18 = (max(var_18, ((min(((var_5 - (arr_23 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [9]))), -49153)))));
                }
                var_19 = (min(var_19, ((min(2342773981909325607, -2068986218)))));
            }
            var_20 = var_10;
        }
        var_21 = 56361;
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {
                    arr_35 [i_9] = ((-(((max(var_13, 247))))));
                    var_22 = (max(var_22, (max(var_7, ((((max(var_3, 10448))) ? 873387370 : (((-(arr_29 [9]))))))))));
                }
            }
        }
    }
    #pragma endscop
}
