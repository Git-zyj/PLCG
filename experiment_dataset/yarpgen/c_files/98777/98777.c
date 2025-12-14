/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_17 = ((((((((520301422 ? 121 : var_6))) ? var_1 : ((var_15 ? var_15 : var_16))))) ? (((min(var_4, -520301422)) ^ -520301423)) : ((-2052384214 ? var_5 : ((max(var_15, 11896)))))));
            arr_7 [i_0] = ((((min((~var_13), ((var_15 ? var_13 : -520301428))))) ? ((41 ? var_13 : var_9)) : (((arr_4 [i_0] [i_0] [i_1 - 1]) ? 1073741808 : (-520301431 - 20469)))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_16 [i_4] [i_0] [i_0] [0] = (min(var_2, (((((var_3 ^ (arr_9 [0])))) ? (arr_11 [7] [14] [i_0]) : 520301422))));
                        var_18 = (max(var_18, ((min(var_4, (((((var_15 ? var_2 : var_12))) ? ((4277764104 ? var_11 : var_5)) : (max(var_0, 1705)))))))));
                        arr_17 [i_0] [i_0] [i_0] [12] [1] [2] = (min(((((((63831 ? var_5 : -520301408))) ? (min(var_7, 520301406)) : ((var_0 ? -1073741808 : 1709))))), (((((var_12 ? var_12 : -1073741808))) ? (max(1718, 17203188)) : (arr_3 [i_3 + 2] [i_3 - 1])))));
                        var_19 = (var_1 && var_4);
                        var_20 = (min(var_20, ((((var_3 ? (var_2 - 1048512) : ((max(var_2, 1)))))))));
                    }
                }
            }
            var_21 *= (32640 && 1);
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            var_22 = var_3;
            arr_22 [i_0] = ((-(!2693683103)));
            arr_23 [6] [i_0] = (var_15 && var_2);
            arr_24 [1] [i_5] [4] |= ((!(arr_21 [i_5 - 1] [i_5 + 2])));
        }
        var_23 = (arr_3 [5] [i_0]);
    }
    for (int i_6 = 2; i_6 < 9;i_6 += 1) /* same iter space */
    {
        var_24 = (max(var_24, ((((((((1 ? 52419 : 205437847)) - 1717))) ? -13220 : ((13219 ? -61 : 112)))))));
        arr_27 [2] = ((((((((6728 ? var_0 : (arr_5 [i_6 + 3] [i_6 - 2] [i_6 - 1])))) ? (var_12 - var_1) : var_12))) ? 1 : (min(((var_15 ? 0 : var_15)), (!1)))));
        var_25 ^= ((((min(17203197, (arr_1 [i_6 + 1])))) ? (((1 ? (arr_2 [i_6 + 4] [7]) : (arr_2 [i_6 + 2] [i_6 + 3])))) : (min(63819, (arr_20 [i_6 + 2] [i_6 - 1])))));

        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            var_26 = (max(var_26, 63818));
            arr_31 [i_7 + 2] = var_16;
            arr_32 [i_6 + 1] [3] = (((((var_8 ? (arr_11 [14] [i_7 + 2] [i_6]) : var_1))) ? (min((arr_11 [i_6 + 4] [i_7 + 2] [i_6]), var_16)) : (((arr_11 [6] [i_7 + 2] [i_6]) ^ var_3))));
        }
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 9;i_8 += 1) /* same iter space */
    {
        var_27 = var_13;
        arr_35 [i_8 + 2] = (~102);
        var_28 -= (((!65535) ^ 0));
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 9;i_9 += 1) /* same iter space */
    {
        var_29 ^= (17601511205694834758 ? ((-1238684892 ? 32718 : var_5)) : (var_11 && -33));
        arr_38 [i_9 + 3] = 12;
        arr_39 [i_9 + 1] [i_9 + 4] = (((((var_12 ? (arr_30 [i_9 - 1] [6]) : (arr_9 [i_9 + 1])))) ? var_9 : var_9));
    }
    var_30 = (((var_6 && (((48775 ? var_2 : 32))))) ? ((var_5 ? var_8 : var_11)) : (~var_0));
    var_31 = (((((var_4 - (min(var_9, 1))))) ? ((((16760 ? 2261655017 : 146)) ^ (11465 - var_8))) : (min(var_0, ((min(61849, 1)))))));
    var_32 = var_2;
    var_33 += (((((var_16 - 520301416) && -1073741815)) ? (max((max(-1059078642, var_7)), ((3874 ? var_10 : 63831)))) : var_4));
    #pragma endscop
}
