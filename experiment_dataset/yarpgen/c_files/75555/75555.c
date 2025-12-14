/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, 26510));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_17 = (min(var_17, (((var_15 ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1]))))));
        arr_2 [i_0 - 2] [i_0] = (((((37411 ? 36880 : var_12))) ? (arr_0 [i_0]) : (((arr_1 [i_0] [i_0]) ? var_6 : 26510))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_14 [i_4] [i_3] [i_3] = 1;
                        var_18 = (((-37411 ? var_13 : -1895343715542131445)));

                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            var_19 = ((arr_4 [i_2 - 1] [i_5 + 2]) ? ((-397603954 ? var_8 : var_13)) : var_9);
                            var_20 = (min(var_20, (((var_15 ? ((255 ? -22 : (arr_11 [i_1] [8] [13]))) : var_12)))));
                        }
                        /* vectorizable */
                        for (int i_6 = 4; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            var_21 *= ((var_4 ? 11027 : ((7 ? var_15 : var_1))));
                            arr_19 [i_6] [i_6] [i_3] [i_3] [i_2 - 1] [i_1] = ((28124 ? 1 : 22588));
                            var_22 = (((arr_15 [i_6 + 2] [i_3 - 1] [i_3] [i_3] [i_3 + 1]) ? (arr_15 [i_6 - 2] [i_3 + 1] [i_3] [5] [i_2 - 1]) : var_4));
                        }
                        arr_20 [i_1] [i_2] [i_3] [i_3] = var_8;
                        var_23 = 22589;
                    }
                }
            }
        }
        arr_21 [i_1] = max(-var_15, (min(((((var_9 + 2147483647) << (((var_6 + 4951979059927938411) - 5))))), (((arr_7 [i_1] [i_1] [i_1]) ? 26507 : (arr_12 [0] [0] [i_1] [0]))))));
        var_24 |= ((var_3 ? ((((((-26507 + 2147483647) << (((var_15 + 12415) - 3))))))) : ((-7197 ? 10680 : -1))));
        var_25 = (((((((min(0, -26504))) ? 232835678 : ((var_11 ? var_4 : (arr_16 [i_1] [1] [i_1] [i_1] [i_1] [i_1] [i_1])))))) ? (arr_7 [2] [i_1] [i_1]) : (((((-(arr_7 [i_1] [i_1] [i_1]))))))));
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_25 [i_7] = 12238;
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 14;i_10 += 1)
                {
                    {
                        arr_34 [i_9] [i_9] [i_8] [i_7] = (max(((var_6 ? (max(var_9, (arr_32 [i_7]))) : (arr_32 [i_8]))), (((!(var_13 | var_10))))));
                        arr_35 [i_7] [i_8] [i_9 + 2] [i_9 - 1] [i_10] [i_10 - 1] = ((((min(22588, -26504))) - ((min(50247, -7177)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
