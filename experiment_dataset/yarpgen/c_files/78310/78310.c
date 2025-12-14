/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((((((min(var_0, 31927)))) ^ ((var_2 ? var_9 : 216172782113783808))))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = (!8064);

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (min(var_6, (((((((36118 ? -24021 : var_7)) + 2147483647)) >> ((((max((arr_2 [i_0]), 1))) - 23088)))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_12 [0] [i_2] [i_2] [i_2] [i_2] = ((((min(var_3, (arr_0 [i_3] [7])))) <= ((max((arr_3 [i_0]), (arr_3 [i_3]))))));
                        var_18 ^= var_9;
                    }
                }
            }
            var_19 = (((((max((arr_1 [i_0] [i_0]), 0)))) > ((-var_9 ? (min((arr_0 [i_1] [i_0]), (arr_10 [i_0] [1] [1]))) : (arr_2 [i_0])))));
            var_20 = ((((((((max(var_7, 24021)))) != -5217842409709904496))) > (min(-7281, 113))));
            var_21 = (min(var_21, (((!(arr_1 [i_0] [i_0]))))));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_15 [10] [i_4] = ((((((31351 ? var_1 : (arr_0 [i_4] [i_4]))) <= ((1 ? var_6 : 2278068884654337068)))) ? (((arr_10 [i_4] [i_4] [i_4]) ? -24010 : -10105)) : ((max(var_6, (arr_9 [i_4] [10] [i_0]))))));
            arr_16 [i_4] [i_4] = (((~7813) * (-32767 - 1)));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                var_22 = 120;
                var_23 = (min(var_23, var_8));
            }
            var_24 = (-7300 ? -951106998950949733 : -8224570313812768241);
        }
        arr_22 [i_0] = (max(((var_6 ? -8224570313812768241 : (arr_14 [i_0] [i_0]))), var_1));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_26 [i_7] = (max((min(1, ((var_12 ? 88 : var_8)))), var_6));
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    {
                        arr_35 [i_7] [i_8 - 2] [i_9] [i_9] [i_10] &= ((min(((max(var_8, (arr_25 [i_9] [i_9]))), var_15))));
                        var_25 = -8618443166722229980;
                        var_26 = (max(var_26, 6690341201559142211));
                    }
                }
            }
        }
        var_27 ^= 0;
        var_28 = ((((~(arr_25 [i_7] [i_7]))) * ((((arr_25 [i_7] [18]) > (arr_25 [i_7] [i_7]))))));
        var_29 += var_1;
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_30 = ((((var_5 ? 1 : 1392717986804938613)) - -32753));
        var_31 = ((679011579341877525 ? (min(var_9, -8986026138686201196)) : (max((arr_24 [i_11]), 4611686018427387872))));
        arr_38 [i_11] [i_11] = var_0;
    }
    var_32 = (min(var_32, var_11));
    #pragma endscop
}
