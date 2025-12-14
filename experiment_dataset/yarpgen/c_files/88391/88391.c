/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_3] = (((arr_1 [i_0]) - (arr_1 [i_0])));
                        arr_14 [i_0] [i_3] = (arr_4 [i_2] [i_0]);
                        var_14 = (((!26382) >= (((arr_6 [i_2] [i_3]) ? (arr_6 [i_2] [i_2]) : var_2))));
                    }
                }
            }
        }
        arr_15 [i_0] = (((arr_11 [i_0] [i_0] [i_0]) <= (arr_11 [i_0] [i_0] [i_0])));
        var_15 = -var_2;
        arr_16 [i_0] = ((var_8 <= (arr_5 [i_0] [i_0])));
    }
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        var_16 = 1;
        var_17 = ((+((-26382 / (min((arr_11 [i_4] [1] [i_4]), 3705340071))))));
        var_18 = ((((((arr_6 [i_4] [i_4 + 1]) * (arr_8 [i_4] [i_4] [i_4 - 2] [i_4 + 1])))) ? (arr_11 [i_4 + 1] [18] [i_4]) : (((((arr_3 [10]) == 995929627705648656))))));
        arr_20 [i_4] = (min(((-(arr_10 [4]))), (arr_6 [i_4 + 1] [i_4 + 1])));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    var_19 = (arr_1 [i_7]);

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                        {
                            arr_35 [i_5] [i_6] [i_7] [i_7] [i_8] [i_7] = (((arr_5 [i_5] [i_7]) && (arr_3 [i_7])));
                            var_20 = (arr_6 [i_5] [i_5]);
                            arr_36 [i_5] [i_5] [12] [i_7] [i_7] [i_7] [i_9] = ((18446744073709551615 ? (arr_1 [i_7]) : (arr_33 [i_7] [i_6] [i_6] [9] [9] [i_9])));
                            arr_37 [i_5] [i_7] [i_7] [i_8] [i_9] = ((-((-1996276167085175680 ? (arr_2 [i_7]) : (arr_11 [i_6] [i_7] [i_6])))));
                        }
                        for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                        {
                            var_21 = ((((((!(arr_26 [14]))))) < var_0));
                            var_22 = (~-7581695517082199017);
                            arr_42 [i_5] [i_6] [i_7] [i_5] [17] = (((-(arr_32 [i_7] [i_7] [i_7]))));
                        }
                        for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                        {
                            var_23 = (!-20866);
                            arr_45 [i_6] [i_7] [20] [i_5] = (arr_44 [i_5] [i_6] [i_7] [i_7] [i_11]);
                            arr_46 [i_7] [i_6] [i_7] [i_7] [i_11] = (((arr_25 [i_11]) >> (((arr_25 [i_11]) - 19936))));
                        }
                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            arr_51 [i_5] [i_7] [i_7] [i_8] [i_12] [i_6] [i_5] = (((arr_12 [i_7] [i_6] [i_7] [i_7]) - (arr_12 [16] [i_6] [i_7] [i_7])));
                            arr_52 [i_5] [i_7] [i_12] = (((!var_1) * -4294967293));
                            var_24 = (((arr_44 [i_8] [6] [i_8] [i_8] [i_8]) ? var_8 : (arr_44 [i_5] [i_12] [8] [i_6] [i_6])));
                            arr_53 [i_7] [i_8] [i_7] [i_6] [i_7] = 995929627705648656;
                        }
                        arr_54 [i_7] [i_6] [i_7] [i_7] [i_8] [3] = ((arr_3 [i_7]) ? (arr_49 [i_7] [i_7] [i_6] [i_6] [i_5] [i_7]) : (arr_43 [i_7] [i_7] [i_7] [i_7] [i_7]));
                        var_25 = ((-((~(arr_3 [i_7])))));
                        arr_55 [i_7] [i_7] [i_7] [i_6] [i_7] = var_9;
                        var_26 = (!var_1);
                    }
                }
            }
        }
        arr_56 [4] = (min((arr_49 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), ((((min(var_13, var_5))) ? (!7384423483898062866) : (arr_5 [i_5] [i_5])))));
    }
    var_27 = ((!(!var_1)));
    #pragma endscop
}
