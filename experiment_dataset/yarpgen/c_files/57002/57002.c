/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min(((355562732 ? -91 : 174)), var_6)) < var_2));
    var_12 &= ((((((((var_0 ? var_4 : var_3))) ? var_3 : var_8))) ? var_2 : var_0));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((((min(29, (arr_1 [15] [i_0])))) ? 114 : ((~((3939404564 ? (arr_0 [i_1]) : 14908)))))))));

                for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    var_14 = ((+((((arr_4 [i_0 + 2]) < (((arr_2 [i_2]) ? var_9 : 355562725)))))));
                    arr_8 [16] [i_1] = (((((min((arr_0 [i_0 - 1]), (arr_5 [i_0] [i_0] [i_1]))))) | ((var_3 & (arr_5 [i_1 - 1] [i_2 + 1] [i_1])))));
                }
                for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_15 = var_9;
                                var_16 &= (!13695656232618449425);
                            }
                        }
                    }
                    var_17 = ((+((max((arr_1 [i_1 + 2] [i_1 + 1]), (arr_1 [i_1 - 1] [i_1 - 2]))))));
                }
                for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
                {
                    var_18 = (min(var_18, -10));

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_23 [i_0 - 2] [9] [i_6] [8] [9] [i_1] = (min(((~(arr_7 [i_1] [i_1] [i_1 + 2] [i_1 - 1]))), (((arr_17 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 2] [i_0 + 2] [i_1]) ? var_3 : (arr_17 [i_0] [7] [7] [i_0] [i_0] [i_0 - 1] [i_0 - 1])))));
                        var_19 = (min(var_19, (max((max((arr_11 [i_0] [i_1] [i_6] [i_7]), ((!(arr_19 [i_0] [i_1] [10] [i_7]))))), (((((!(arr_1 [0] [i_0])))) < 15))))));
                    }
                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        var_20 = (min(var_20, var_2));
                        var_21 = (max(var_21, (((var_8 + (((arr_20 [i_0] [i_6 + 3] [i_8 - 1] [18]) ? (arr_20 [i_0] [i_6 + 2] [i_8 - 1] [i_8]) : (arr_20 [i_0] [i_6 + 1] [i_8 - 2] [i_8]))))))));
                    }

                    for (int i_9 = 4; i_9 < 18;i_9 += 1)
                    {
                        arr_30 [i_0] [i_0] [i_0] [i_9] [i_1] [i_0] = ((3619 ? 30688 : 4095));

                        for (int i_10 = 1; i_10 < 17;i_10 += 1)
                        {
                            arr_35 [5] [i_1] [i_6] [i_9] [2] = (min(76, 2522128625736452682));
                            var_22 = (((min((arr_16 [8] [8] [i_6] [i_6] [13] [i_6 + 4] [i_6]), (arr_31 [i_0] [i_1] [i_6] [i_9 - 2] [i_1])))));
                            var_23 = (((arr_10 [i_1]) != (min(((var_5 - (arr_2 [i_10]))), (arr_32 [i_0 + 1] [i_6 + 4] [i_1 + 1] [i_10 + 2])))));
                            var_24 = (max(var_24, (arr_14 [i_0 + 1] [i_9] [1])));
                        }
                    }
                    var_25 = ((+((((((arr_10 [i_1]) ? var_6 : var_6))) * (arr_17 [i_0 - 1] [i_1] [i_1] [i_1 + 2] [i_6 + 4] [i_6] [i_6 + 3])))));
                }
                for (int i_11 = 1; i_11 < 15;i_11 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_12 = 2; i_12 < 16;i_12 += 1)
                    {

                        for (int i_13 = 3; i_13 < 18;i_13 += 1)
                        {
                            var_26 = 18240179207129902039;
                            var_27 = (((arr_1 [i_0] [i_1]) ? var_4 : var_0));
                            var_28 = ((3939404563 ? 13 : 57));
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_29 = (min(var_29, (!var_3)));
                            var_30 = (max(var_30, (((var_10 || (arr_43 [i_0] [i_12 - 2] [i_11 + 2] [i_1] [i_1] [i_0]))))));
                            arr_46 [i_0] [i_1] [i_11 + 4] [i_12] [i_1] = ((-(((arr_39 [i_12] [i_1] [i_12 + 3] [1]) ? var_3 : (arr_25 [i_0] [i_1] [i_1] [i_12] [6])))));
                        }
                        arr_47 [i_0] [i_1] [i_0] [i_1] = ((!(arr_28 [i_0] [i_0] [0] [i_1])));
                    }
                    arr_48 [i_0] [i_1 - 2] [i_1] = (min(206564866579649576, 18715));
                }
            }
        }
    }
    #pragma endscop
}
