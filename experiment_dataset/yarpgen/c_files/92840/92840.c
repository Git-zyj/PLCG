/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_1 ? var_2 : var_11)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, var_10));
                    var_22 = 196;
                }
            }
        }
        arr_7 [i_0] [i_0] = (((1906522145 == 976479046) ? ((min(12, 637331374))) : ((244 ? (arr_0 [i_0]) : (arr_3 [9])))));
        var_23 ^= (~182);
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_24 = (max((((var_18 || var_17) - ((976479046 & (arr_3 [i_3]))))), (!12)));
        var_25 = (min(var_25, (((~(min((~var_2), var_2)))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    var_26 |= 169;
                    arr_19 [i_3] [i_3] [i_3] = (((((min(var_7, var_9)) >= (arr_2 [i_3]))) ? var_5 : (((((max((arr_3 [i_3]), (arr_18 [i_5] [i_3])))) || var_4)))));
                    arr_20 [5] [i_3] [i_3] = ((-((((((244 & (arr_10 [6])))) || ((min((arr_10 [i_4]), (arr_8 [3] [0])))))))));
                    var_27 = ((arr_15 [i_5] [i_4] [i_3] [i_3]) ? ((-1951020919540589761 / ((min(-1763356987, 105))))) : (arr_3 [i_3]));
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 21;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            var_28 = (((~237) + 244));

            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                var_29 = (arr_28 [2] [i_7] [i_7] [8]);
                arr_30 [i_8] [i_8] [23] = ((!(57911 && 50)));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_30 ^= (((arr_25 [i_6] [i_6]) % (1 + 1)));
                            var_31 = (min(var_31, ((((186 - (arr_28 [24] [13] [i_7] [13])))))));
                            var_32 = ((104 && ((!(arr_29 [14] [5])))));
                        }
                    }
                }
                var_33 = 1412291215;
            }
            var_34 = ((((arr_32 [21] [i_7] [i_7]) + var_0)));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    {
                        var_35 |= (((var_16 ? var_1 : (arr_22 [i_11] [i_12]))));
                        var_36 = (var_3 - 145);
                        var_37 -= (((arr_38 [i_6] [i_6 + 2] [i_6 - 2] [19]) ? var_0 : (arr_29 [i_12] [24])));
                        arr_42 [i_6] [i_6 + 3] [i_6] [i_6 + 2] [i_6] &= ((var_17 % ((169 ? 10717 : (arr_32 [i_6] [i_7] [13])))));
                        var_38 ^= (((arr_35 [i_6] [i_12] [i_12] [i_12] [i_12]) && 4095));
                    }
                }
            }
        }
        var_39 = var_9;
    }
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        var_40 -= ((((!(((-(arr_28 [i_13] [i_13] [19] [i_13])))))) && var_14));

        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            var_41 = ((((arr_35 [8] [i_14] [i_13] [1] [i_13]) || ((min(var_16, var_1))))));
            arr_49 [i_13] = (3636567513 || 70);
            var_42 = arr_38 [2] [i_14] [i_14] [i_14];
        }
        for (int i_15 = 4; i_15 < 11;i_15 += 1)
        {
            var_43 = (((max(((max(var_5, 1))), (49152 + 8647971372172625469))) & (!var_9)));
            var_44 = ((((((max((arr_39 [11] [i_13] [18]), (arr_36 [i_13] [i_13] [1] [i_13] [22])))) && (((arr_17 [12] [i_13] [i_15 - 3]) && (arr_44 [i_13]))))) && ((max(var_4, (((!(arr_0 [i_15])))))))));
        }
    }
    #pragma endscop
}
