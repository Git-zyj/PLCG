/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_12 = ((3247226347 ? 1047740936 : 7723758974020351746));
        var_13 = ((var_6 != (arr_1 [i_0] [i_0 + 3])));
        arr_2 [i_0] = ((!(arr_1 [i_0] [i_0 + 3])));
        var_14 = (max(var_14, (~-228643334)));
        var_15 = ((((-228643334 + 2147483647) << (((-228643334 + 228643351) - 17)))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] = ((+(((arr_0 [i_1 - 1] [i_1]) ? (arr_0 [i_1 + 1] [i_1 - 1]) : var_0))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_16 = ((+(((arr_0 [i_1 + 2] [i_1 + 2]) ? 33554424 : 228643333))));
            var_17 = ((!(arr_0 [i_1 + 2] [i_2])));
            var_18 -= ((((((arr_7 [i_1] [i_2] [i_1]) ? 53601 : (arr_7 [i_1] [i_1] [i_1])))) ? (arr_6 [i_1 + 1]) : (arr_8 [i_1] [i_1 + 1] [i_2])));
            var_19 = (-4261412872 == (arr_6 [i_1 + 1]));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_20 = (((((var_0 - (((arr_8 [i_1] [i_1 + 2] [i_1 + 1]) ? var_6 : (arr_0 [i_3] [i_3])))))) ^ (((11935 & -26055) ? (arr_4 [i_3]) : (((arr_3 [i_1]) + 2586155260220465625))))));
            arr_12 [12] [i_3] = 3247226373;
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
        {
            var_21 *= ((!(((~((-(arr_16 [i_1] [i_4] [i_1]))))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_23 [i_1] [i_4] [i_5] = ((((min(((max((arr_11 [i_4] [i_5] [i_5]), var_2))), (arr_10 [i_1] [i_1])))) ? (max(985162418487296, (arr_1 [i_1] [i_1]))) : (arr_9 [i_6] [i_5] [i_1])));
                        var_22 = (((arr_20 [i_1 + 1] [1] [i_5]) == ((((min((arr_0 [i_1] [i_1]), (arr_20 [i_1] [i_4] [i_6])))) ? -var_0 : var_9))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_23 = (((max((min((arr_3 [12]), 33554424)), (arr_4 [i_1 + 1]))) >> (-var_2 < var_6)));
                            arr_31 [i_9] [i_7] = (arr_8 [i_1] [i_4] [i_7]);
                            var_24 = ((-(max((arr_19 [i_9] [i_4] [i_8 - 1] [i_8]), (arr_27 [i_1] [i_1] [i_8 - 2] [i_8] [i_9] [i_7])))));
                            var_25 = ((((arr_27 [i_1] [i_1 + 1] [i_4] [i_8 + 1] [i_8 - 2] [i_8 - 2]) ? (arr_27 [i_1] [i_1 + 1] [i_1 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 2]) : (arr_27 [i_1 - 1] [i_1 + 1] [i_4] [i_8 - 2] [i_8] [i_8 + 1]))));
                        }
                    }
                }
            }
            arr_32 [i_1] [5] &= ((((985162418487327 ? (arr_17 [i_1 + 1] [i_4] [i_4]) : 985162418487279))) ? (min(((((arr_6 [3]) || (arr_15 [i_1] [i_1 + 2] [i_1 + 2])))), (((arr_20 [i_1] [6] [6]) * -5078465134638537686)))) : (arr_1 [i_1 - 1] [i_1 - 1]));
        }
        var_26 = ((((arr_17 [i_1 + 2] [i_1 + 2] [i_1 + 2]) + (arr_30 [i_1] [i_1 - 1] [i_1] [i_1 + 2] [i_1 - 1] [i_1]))));
    }
    var_27 = var_1;
    #pragma endscop
}
