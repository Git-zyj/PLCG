/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_10 = 8596648972308656314;
        arr_2 [i_0] = ((-((var_4 ? (arr_0 [i_0] [i_0]) : 40))));
        var_11 = (((arr_0 [i_0] [i_0]) != (arr_0 [i_0] [i_0])));
        arr_3 [i_0] = (~var_0);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (((-2078038670 > var_6) ? ((var_6 ? (arr_0 [1] [i_0]) : var_9)) : (~var_1)));
                    var_13 = (~749054707);
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        arr_12 [i_3 - 1] [i_3] = ((min(((-(arr_7 [i_3 - 1] [21] [i_3] [i_3]))), (arr_10 [i_3 - 1]))));
        var_14 |= ((((((max(var_1, -314208854))) ? (((min(var_8, (arr_6 [22] [i_3 - 1] [1]))))) : 2964234110980562924)) >> ((((var_7 ? var_8 : (arr_11 [i_3] [i_3]))) ^ 52))));
    }

    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_15 = (max(var_15, ((((((~5906128855412796611) <= (((max(21721, (arr_14 [i_4]))))))) ? (((!((((arr_13 [i_4] [i_4]) & var_7)))))) : ((((max(37490, 199))) ? (!0) : ((-314208842 ? 126 : var_7)))))))));
        var_16 *= (min(((min((arr_5 [i_4]), (arr_5 [i_4])))), (arr_1 [i_4] [i_4])));
        var_17 = ((~(arr_14 [15])));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {
        arr_17 [5] = -3928098762633289977;
        var_18 = (min(var_18, ((max(var_0, ((max((arr_6 [i_5] [i_5] [i_5]), (arr_6 [i_5] [i_5] [i_5])))))))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_19 = (min(var_19, (((3449637455654045741 && (var_2 < var_0))))));
            var_20 = arr_13 [i_6] [8];
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 4; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_21 = ((1 ? (~1) : ((((!1436374549) > ((171 ? var_6 : (arr_5 [i_10]))))))));
                            arr_34 [i_6] [i_6] [1] = (arr_4 [i_6]);
                        }
                    }
                }
            }
            var_22 = (((-((-(arr_28 [i_6]))))));
        }

        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        arr_42 [i_6] [i_6] [i_6] [i_6] [i_6] = (((((1 ? (arr_7 [i_6] [i_6] [i_6] [i_6]) : (arr_23 [i_13])))) ? (((arr_4 [i_6]) ? 1 : (arr_20 [i_6]))) : ((~(arr_24 [i_6])))));
                        var_23 = (max((((arr_18 [i_6]) * var_7)), ((-(arr_36 [i_13])))));
                    }
                }
            }
            var_24 = var_6;
        }
        for (int i_15 = 1; i_15 < 1;i_15 += 1)
        {
            var_25 |= (~1);
            var_26 = max(var_2, 1195576897);
        }
        arr_46 [i_6] = ((~(arr_26 [i_6] [1] [i_6])));
        var_27 = ((((min((max((arr_7 [i_6] [13] [13] [i_6]), var_2)), (1 > var_2)))) < (((((-(arr_43 [12] [i_6] [13]))) >= (~1))))));
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 13;i_17 += 1)
        {
            for (int i_18 = 3; i_18 < 11;i_18 += 1)
            {
                {
                    var_28 *= (((-(!var_1))) >= (~1901903995));
                    var_29 = (arr_47 [i_18 + 1] [i_18 - 1]);
                    arr_54 [i_16] [i_16] = ((~(((arr_26 [i_18 + 2] [i_18 + 2] [i_18 - 1]) ? var_2 : (arr_26 [i_18 + 2] [i_17] [i_18 + 2])))));
                }
            }
        }
    }
    #pragma endscop
}
