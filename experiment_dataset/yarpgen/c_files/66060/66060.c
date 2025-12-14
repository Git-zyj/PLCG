/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_10 = (max(var_10, (((~((-61 ? -9240 : ((-100 ? (arr_0 [i_0]) : var_3)))))))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_11 = (arr_4 [i_0] [i_0] [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_12 = (((arr_1 [i_0]) <= (((arr_4 [i_1] [i_0] [i_1]) ? (arr_10 [i_2 - 2] [i_0] [i_0] [i_1]) : 4294967282))));
                        var_13 = (arr_0 [i_2]);
                    }
                }
            }
            arr_11 [i_0] = (max(191, (((4294967258 | var_9) >> (31263 || 65)))));
        }
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        var_14 = ((((min(((var_2 ? var_3 : var_5)), ((-(arr_9 [i_4 - 1] [i_4 - 1])))))) ? ((-94 / (arr_7 [i_4]))) : ((~((15962530658371702157 ? 34274 : 9239))))));
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        var_15 = 7;
                        arr_22 [i_4] = (((((+(((arr_12 [i_7]) ? var_3 : (arr_2 [i_4])))))) ? (max((max(var_3, var_2)), ((min((arr_13 [i_4] [i_4 + 1]), 65))))) : ((((((var_0 ? (arr_9 [i_7] [i_7]) : 31262))) ? (((13 ? var_0 : var_1))) : (var_7 ^ 4194303))))));
                        var_16 = (min(var_16, (((!(min((((arr_9 [i_5 + 4] [i_5 + 4]) < (arr_14 [i_5] [i_6] [i_5]))), ((!(arr_6 [i_4]))))))))));
                    }
                }
            }
        }
        var_17 = ((34274 ? 161 : 37));
        var_18 = (min((min(((4294967282 ? 205 : 57)), 13)), ((min(104, -105)))));
    }
    for (int i_8 = 4; i_8 < 21;i_8 += 1)
    {
        var_19 -= ((!(!3027655060)));

        /* vectorizable */
        for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
        {
            arr_29 [i_8 - 2] [i_8] = (((arr_28 [i_8]) ? (arr_7 [i_9]) : (arr_28 [i_8])));
            var_20 *= (((arr_0 [i_8 - 1]) ? 3027655060 : (arr_0 [i_8 - 4])));
            arr_30 [i_8] [i_8] = arr_7 [i_8 - 2];
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
        {
            arr_33 [i_8] [i_8] = (!4194298);
            arr_34 [i_10] [i_10] &= ((83 ? 4294967283 : -1));
        }
        var_21 = (((min((arr_1 [i_8]), (arr_1 [i_8 - 4])))) ? (((-4194299 ? 4194317 : (arr_1 [i_8 - 1])))) : ((536870784 ? (arr_28 [i_8]) : (arr_25 [i_8 - 3]))));
    }
    var_22 = ((((var_8 ? (max(-63, var_9)) : var_4))) ? -23 : 18446744073709551615);
    var_23 = 0;
    var_24 = ((var_3 << (var_3 - 11107930742977463757)));
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 24;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            {
                var_25 = (min((arr_38 [i_11 - 2]), 107));
                var_26 = arr_36 [i_11 - 2];
            }
        }
    }
    #pragma endscop
}
