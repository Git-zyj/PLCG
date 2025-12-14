/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_0);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (-1375685496 ? 4194303 : 1205533968);
        arr_2 [i_0] &= (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = var_7;

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_14 = (arr_7 [i_1] [i_1] [i_3]);
                var_15 = ((3089433327 ? var_7 : -4194303));
                var_16 = ((var_1 ? (arr_9 [i_1] [i_2] [i_2] [i_1]) : (arr_9 [i_1] [i_2] [i_3] [i_1])));
            }
            arr_11 [i_1] [i_1] |= 3089433327;
            var_17 = (min(var_17, ((((((min(12429787524132370791, (arr_10 [i_1] [i_1] [i_1])))) ? (arr_1 [i_2]) : (((arr_4 [i_1]) ? 7224 : 20))))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_18 = (max(var_18, (var_0 * var_1)));
            var_19 = (((arr_13 [1] [i_4]) ? (arr_13 [i_1] [i_4]) : (arr_4 [i_4])));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {

                for (int i_7 = 3; i_7 < 12;i_7 += 1)
                {
                    var_20 = (((((127 ? 7224 : var_9))) ? (arr_6 [i_1] [i_5]) : (arr_6 [i_1] [i_5])));
                    var_21 = (max(var_21, (((0 ? 1084707593 : 1084707593)))));
                    arr_23 [i_1] [i_1] [i_6] [i_6] &= 3210259703;
                    var_22 = ((var_1 ? 53930 : var_9));
                    var_23 = (((5 ? var_5 : (arr_16 [i_1] [i_5] [i_5]))));
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    arr_26 [i_8] [i_1] [i_6] [i_8] [i_6] = ((0 ? ((3089433327 ? var_8 : 6016956549577180825)) : 218));
                    arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] = (((arr_19 [i_1] [i_6]) <= (((arr_7 [i_1] [8] [i_8]) ? var_10 : 12429787524132370791))));
                    var_24 = (max(var_24, (((6016956549577180825 + (arr_14 [i_1] [i_1]))))));
                    arr_28 [i_1] [i_1] = 0;
                }
                var_25 = (3210259702 && 6016956549577180825);
            }
            var_26 = (min(var_26, var_10));
        }
        var_27 -= (((-5689 ? (((var_11 ? (arr_25 [i_1] [i_1] [i_1] [i_1] [i_1]) : 1992663079))) : (((arr_1 [i_1]) ? 1576821839504769439 : var_6)))) + (((((((arr_22 [i_1] [i_1]) ? 1 : 700785299))) ? ((min(var_1, -111))) : (~-22)))));
        var_28 = ((((min(var_1, (arr_12 [i_1])))) ? var_2 : ((((arr_9 [i_1] [i_1] [i_1] [i_1]) != 1205533968)))));
    }
    var_29 = (4417106405120395241 && var_5);
    #pragma endscop
}
