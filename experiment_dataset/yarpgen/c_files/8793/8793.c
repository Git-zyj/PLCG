/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((1067755818 ? 18446744073709551615 : 311372596)) * ((((((var_4 ? var_8 : var_11))) ? var_0 : var_2)))));
    var_13 = var_10;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = (min(((max(3983594700, (max(var_4, 311372595))))), (((arr_0 [i_0]) ? ((((arr_1 [i_0]) * (arr_1 [i_0])))) : ((var_2 ? (arr_0 [i_0]) : (arr_1 [i_0])))))));
        var_15 = ((((((arr_0 [i_0]) ? (((max(var_11, (arr_1 [6]))))) : (((arr_0 [i_0]) ? 2948472357 : (arr_0 [16])))))) ? ((min(((var_4 ? -9160443370436782573 : -19581)), ((max(-20809, var_10)))))) : (max((arr_1 [i_0]), (max(var_2, (arr_0 [i_0])))))));
        var_16 ^= (((((-85 ? ((var_8 << (((arr_0 [i_0]) - 4654429127016504807)))) : var_1))) ? (arr_1 [16]) : ((~(((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
        var_17 = (((((((min(var_10, var_9))) ? ((((arr_1 [1]) * 311372596))) : ((var_11 % (arr_0 [i_0])))))) ? ((((((var_1 ? -888095380 : var_3))) ? ((~(arr_1 [i_0]))) : (((arr_1 [i_0]) - -888095366))))) : ((((var_1 ? (arr_0 [i_0]) : var_10)) % var_1))));
        arr_2 [20] = ((((min(2344335888732823932, 1346494938))) * (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_18 = (((arr_6 [14] [i_2] [i_3]) ? ((((min(3983594681, 2649043502901412605))) ? ((min(var_5, (arr_6 [14] [i_2] [11])))) : (arr_5 [i_1] [i_1]))) : (((((arr_0 [i_1]) != ((max((arr_4 [i_1] [i_2]), (arr_4 [i_1] [i_3]))))))))));
                    var_19 = (min(-831722603, (((arr_8 [i_1] [i_2] [i_3] [i_3]) ? 29971 : -20809))));
                }
            }
        }
        var_20 ^= min((((((((arr_1 [17]) ? var_2 : 311372600))) && var_1))), ((-931140394 ? (((var_10 ? var_10 : var_4))) : (arr_4 [i_1] [i_1]))));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_21 = 2857161817;
            var_22 = min((min((arr_1 [i_1]), ((~(arr_3 [3]))))), ((min(((~(arr_1 [i_4]))), var_2))));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_23 += (min((((((var_10 ? (arr_12 [i_1] [i_1] [i_5]) : 2649043502901412605))) ? (min((arr_5 [i_1] [i_5]), 2948472330)) : var_9)), (((arr_8 [i_5] [i_5] [i_5] [2]) ? ((max(var_1, (arr_7 [i_5] [i_1] [i_1] [i_5])))) : ((311372595 + (arr_5 [i_5] [i_5])))))));

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_24 = (((((max((arr_8 [4] [i_5] [i_5] [i_5]), (arr_10 [i_1]))))) ? (((!var_0) ? (((max(var_3, (arr_10 [16]))))) : (arr_3 [4]))) : var_4));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_25 = var_1;
                            var_26 -= (((max((arr_5 [i_1] [i_6]), -23482)) <= ((((arr_5 [i_1] [1]) ? (arr_14 [i_7] [i_6] [i_5]) : var_2)))));
                        }
                    }
                }
                arr_20 [i_6] [5] = var_9;
                var_27 += (((arr_1 [i_1]) ? (((arr_9 [i_1]) ? var_1 : (arr_9 [i_5]))) : ((max((arr_1 [i_5]), var_9)))));
            }
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                var_28 = (((max(var_11, (arr_3 [i_1]))) * ((((arr_17 [i_1] [i_5] [i_1] [i_9]) % (max(var_6, -20782)))))));
                var_29 = (min(var_29, var_11));
                var_30 = (!var_0);
                var_31 = (((((((arr_3 [i_9]) >> (((arr_4 [i_1] [i_5]) - 2653145273))))) ? 1437805457 : ((((arr_15 [i_1] [i_1] [0]) ? (arr_23 [i_1] [i_5] [i_5] [i_9]) : var_2))))) != ((((((arr_13 [i_1] [12] [i_1]) ? (arr_13 [i_1] [1] [4]) : var_2)) + var_10))));
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            var_32 = (min(var_32, (((!(arr_13 [i_10] [i_10] [i_10]))))));
            var_33 = var_11;
            var_34 = (((arr_0 [i_1]) ? (arr_24 [i_10] [i_10] [i_1]) : var_2));
            var_35 = ((2857161826 ? (arr_7 [14] [i_1] [i_10] [i_10]) : var_3));
        }
    }
    var_36 = ((7359 ? (var_8 - var_11) : (((((4383550523785291678 ? -20794 : var_9))) ? ((var_8 ? var_8 : var_2)) : ((max(var_7, var_4)))))));
    #pragma endscop
}
