/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_18 = (max(var_18, ((min((max(((((arr_0 [i_0 - 1] [i_0]) ? 4095 : 0))), (arr_0 [i_0 + 1] [8]))), (arr_1 [12]))))));
        var_19 ^= (((((min(var_3, 183367858))) ? 34 : 244)) / (arr_0 [i_0] [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 24;i_4 += 1)
                {
                    {
                        var_20 = 4294963194;
                        arr_13 [i_3] = 243;
                    }
                }
            }
        }
        var_21 = 28;
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            var_22 = (arr_12 [i_6 - 1]);
            arr_18 [i_6] [i_5] [i_5] = ((((min(((8 ? var_10 : 0)), 1346785030))) ? (min(4294963195, 13)) : var_13));

            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_23 = var_7;
                            var_24 = (!var_1);
                        }
                    }
                }
                var_25 = (((((arr_22 [i_5] [i_6] [i_6] [i_7]) - ((-(arr_22 [i_5] [i_6] [1] [i_7]))))) & ((((((-(arr_26 [i_5] [i_5] [1] [i_5]))) == (arr_4 [i_6 + 2] [i_7 - 1])))))));
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        {
                            var_26 = var_14;
                            var_27 = ((((~(arr_24 [12] [i_10 + 2] [i_10] [7] [i_6 + 1] [i_6 - 1]))) | var_10));
                            var_28 = (max(var_28, (((((((!((!(arr_22 [i_5] [i_6] [i_7] [i_6]))))))) == -7364330936734738202)))));
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_29 -= (min(96, var_8));
                            arr_42 [i_5] [i_6] [i_12] [i_13 + 1] [i_14] [i_13 + 1] = -55;
                        }
                    }
                }
                var_30 = (min(var_30, ((min((((arr_10 [i_5] [i_6 + 1] [i_12]) ? (~1499833844418243126) : -825319341)), (((var_5 / (min(var_12, (arr_26 [i_5] [i_6] [8] [i_12])))))))))));
                arr_43 [i_5] [i_6] [1] = (arr_41 [i_5] [i_5] [i_6] [i_6] [i_5]);
            }
        }
        /* vectorizable */
        for (int i_15 = 1; i_15 < 19;i_15 += 1) /* same iter space */
        {
            arr_46 [i_15] = (-4294963198 + 4294963168);
            var_31 += (((arr_8 [i_15 - 1]) >= (arr_39 [i_15 + 3])));
            arr_47 [i_5] [i_5] [i_5] = (!var_2);
        }
        for (int i_16 = 1; i_16 < 19;i_16 += 1) /* same iter space */
        {
            var_32 = var_14;
            /* LoopNest 3 */
            for (int i_17 = 1; i_17 < 21;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 22;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        {
                            var_33 = ((~((((-(arr_16 [i_16] [i_16 + 3]))) | ((max(143, 247)))))));
                            var_34 = (min(var_34, ((((((max((arr_35 [i_5] [i_5] [i_5]), (arr_25 [i_5] [i_5] [i_17 - 1] [i_5] [i_18] [i_19]))))) ? (((~1499833844418243114) ? (((-(arr_14 [i_5])))) : (min(var_15, var_3)))) : var_5)))));
                            var_35 = (~-101);
                            arr_57 [i_5] [20] [i_16] [i_17] [i_5] [i_19] = ((-(arr_48 [i_17 - 1] [i_16 - 1])));
                        }
                    }
                }
            }
        }
        for (int i_20 = 1; i_20 < 19;i_20 += 1) /* same iter space */
        {
            var_36 = (((arr_45 [i_20 - 1] [i_20] [i_20]) ? (((19353 << (((var_3 + 2153754836084903143) - 10))))) : 4119));
            var_37 = arr_37 [i_20] [8] [i_20] [i_5] [i_5] [i_5];
        }
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 22;i_21 += 1)
        {
            for (int i_22 = 1; i_22 < 20;i_22 += 1)
            {
                {
                    var_38 ^= ((~((-(arr_64 [i_22 + 2])))));
                    var_39 = ((arr_24 [i_5] [i_21] [i_21] [i_21] [i_21] [i_22 + 1]) == 8907);
                }
            }
        }
    }
    var_40 = var_13;
    #pragma endscop
}
