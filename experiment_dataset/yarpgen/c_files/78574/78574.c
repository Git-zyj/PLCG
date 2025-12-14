/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78574
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
                var_14 = (max(var_14, (arr_4 [i_0] [i_0] [i_1])));
                var_15 = 2322126547;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_16, ((min(2322126547, ((min(var_2, -var_12))))))));
                            var_17 = 16;
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(33724, 1972840729));

    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_12 [i_4] = (((min(1972840713, var_0)) << ((((var_0 & (arr_2 [i_4]))) - 20488))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_19 [i_4] &= 2322126567;
                    var_19 = (max(var_19, ((((4294967295 * (arr_8 [i_4] [i_4] [i_4] [i_4])))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_20 = 255;
                                arr_24 [i_5] [i_8] [i_6] = (((min((~var_9), (min(var_6, 2322126553)))) | (arr_11 [i_8] [12])));
                                var_21 &= 22959;
                            }
                        }
                    }
                    var_22 = 74;
                    var_23 = ((((-(min((arr_6 [i_4] [i_5] [i_5] [i_6]), var_10)))) >> (1972840731 - 1972840729)));
                }
            }
        }
        var_24 = var_0;
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_25 = ((((min((var_4 & 26781), (arr_5 [i_10] [i_11])))) ? ((((var_1 ? var_13 : 2322126548)) ^ var_6)) : (-31823 != 176)));
                    var_26 = var_0;
                    arr_32 [i_11] [i_9] = (arr_21 [1] [i_10] [2] [i_11]);
                }
            }
        }
        var_27 = (min(var_27, ((((arr_17 [i_9] [i_9] [i_9] [i_9]) >= (min(var_1, (arr_17 [i_9] [i_9] [i_9] [i_9]))))))));
        arr_33 [i_9] [i_9] = (((min((arr_25 [i_9]), (arr_4 [i_9] [i_9] [i_9]))) <= (arr_13 [i_9])));
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 21;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 20;i_13 += 1)
        {
            {
                var_28 = (((max((arr_34 [i_13]), (min(182, (arr_37 [i_13] [i_13])))))) ? ((((var_13 / var_12) ? var_1 : var_11))) : ((min(-103, (arr_38 [i_12] [3])))));
                arr_39 [i_12] [i_13] [i_13] = max((min(546291875, (arr_34 [i_12]))), ((((arr_36 [i_13]) || (((1 ? var_4 : 69)))))));
                var_29 = (max(var_29, ((((((var_4 ? (arr_35 [8] [i_13 - 1]) : 47871435))) ? (((2322126553 ? (arr_36 [i_12]) : var_6))) : 2322126567)))));

                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    var_30 = ((((((-(arr_34 [i_12]))))) ? (min(((127 ? var_6 : var_5)), (arr_42 [i_12] [i_12] [i_12]))) : 1));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 20;i_16 += 1)
                        {
                            {
                                var_31 = min(-103, 511);
                                var_32 = (((arr_48 [i_12] [i_12] [i_15]) || var_2));
                                var_33 = (arr_43 [i_15] [i_15] [i_13] [i_13] [i_12]);
                                var_34 = (max(var_34, (((((min((arr_48 [i_12] [i_12] [i_15]), 103))) >= (min(((1972840729 ? (arr_49 [i_16 + 1] [i_15] [i_14] [8] [i_12] [i_12]) : var_9)), (arr_43 [i_13 - 1] [i_16 + 1] [i_15] [i_16 - 1] [i_16 + 1]))))))));
                            }
                        }
                    }
                    arr_51 [i_13] = ((~((((min(var_5, (arr_41 [i_12] [16] [i_13 + 1] [i_12])))) ? (~var_10) : ((-4 ? 14504500949999394422 : 3942243123710157194))))));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            {
                                var_35 |= (max((((!((((arr_49 [0] [i_13 - 1] [i_14] [i_14] [0] [i_18]) | (arr_50 [i_12] [10] [i_14] [i_17] [i_18]))))))), ((((max(1, 2106392334))) ? (min(var_7, 14504500949999394436)) : var_2))));
                                var_36 |= var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
