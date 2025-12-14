/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((arr_1 [i_0] [i_0]) ? var_15 : var_4))) && (~2147483642)));
        arr_3 [i_0] [17] = (arr_1 [i_0] [i_0]);
    }
    var_19 = (min(var_19, (((((!(!0))) || ((((((37 ? var_0 : var_3))) ? var_16 : (var_16 && 10988044089516823071)))))))));

    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_11 [i_1] = (~var_8);
            arr_12 [i_1] = (+-25315);

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_15 [i_1] [i_1] [i_2] [i_2] = ((13673603923287179509 ? 11364424044471802676 : 12));
                arr_16 [i_1] [i_2] [3] [i_1] = ((7680 ? (max(var_3, ((248 ? 0 : 1)))) : (((((5008047887949616833 ? 67108863 : -176518971))) ? (~var_18) : (~0)))));
                arr_17 [i_1] [i_1] [i_1] = (~-var_18);
                var_20 = (max(var_20, var_2));
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_21 = var_15;
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_22 = ((!(arr_19 [i_1])));
                            arr_27 [i_1] [i_1] = var_8;
                        }
                    }
                }
                arr_28 [i_1] = (~-110);
                var_23 ^= (~-42085);
            }
        }
        arr_29 [i_1] [i_1] = ((((((!(arr_25 [1] [i_1] [1] [i_1] [1]))) << (((((arr_25 [i_1] [i_1] [i_1] [i_1] [i_1 - 1]) ? 7680 : (arr_24 [i_1] [i_1]))) - 4306063345104798152))))));
        var_24 = (~-26);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        arr_33 [i_7] [i_7] &= -var_0;
        arr_34 [i_7] = (1210712812 ? 241 : 249);
        var_25 += (241 ? 1 : 23460);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_26 = (min(var_26, (((-((-(arr_35 [i_8] [3]))))))));
        var_27 = var_4;
        arr_38 [i_8] = arr_1 [i_8] [i_8];
        var_28 = (min(var_28, (var_10 && var_8)));
        var_29 ^= 7;
    }
    var_30 = ((~(var_3 - var_13)));
    var_31 = (var_13 * var_17);
    #pragma endscop
}
