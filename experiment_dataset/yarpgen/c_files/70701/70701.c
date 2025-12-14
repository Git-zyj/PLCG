/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= ((!((((arr_0 [i_0]) >> (((((arr_1 [i_0]) ? 51939 : var_8)) - 51925)))))));
        var_12 ^= (((min(32767, (arr_1 [i_0 + 2]))) + (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_13 -= (arr_3 [i_1]);
        arr_5 [i_1] = ((max(var_8, ((-(arr_3 [i_1]))))));
        var_14 = (!(((5623 ? -1470028212712081719 : 3876347315072783348))));
        var_15 = (arr_3 [i_1]);

        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_16 = var_2;
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_17 = (((((((arr_9 [i_1]) ? var_5 : var_4)))) ? ((((max((arr_3 [i_1]), 32767))) ? (arr_14 [i_1] [i_1] [i_1] [i_1] [i_4] [i_1]) : (arr_11 [i_1] [i_2] [i_5] [i_2]))) : (var_6 % var_5)));
                            var_18 = (((-828157077 - -32746) ? (((((max(-32747, 18056))) ? ((var_7 - (arr_13 [i_1] [i_2] [i_3] [i_4] [i_1]))) : -var_7))) : ((-(((arr_8 [i_2]) ? var_1 : (arr_13 [i_1] [i_1] [i_3] [i_1] [i_5])))))));
                            var_19 = (var_7 + 47479);
                            arr_15 [i_5] [i_3] [i_3] [i_3] [i_5] = ((((((((-(arr_11 [i_1] [i_2] [i_4] [i_4])))) ? var_2 : (max(var_9, (arr_11 [i_4] [i_2] [i_2] [i_2])))))) ? (max(var_3, (arr_12 [i_2] [i_2 - 3] [i_2 - 3] [i_2]))) : ((((((var_5 ? var_0 : var_9)) == ((((arr_3 [i_5]) + var_10)))))))));
                        }
                    }
                }
                var_20 = (arr_6 [i_2]);
            }
            var_21 = (min(var_21, ((max(((841955303976585024 ? (((~(arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) : (((arr_10 [i_2] [i_2] [i_2] [i_1]) ? var_11 : (arr_13 [i_1] [i_1] [i_1] [i_2] [i_1]))))), (((arr_8 [i_1]) ? var_1 : (max(var_5, (arr_8 [i_2]))))))))));
            arr_16 [i_1] = (arr_7 [i_1] [i_1]);
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_22 |= (((arr_6 [i_1]) ? ((((var_0 + (arr_19 [20]))) / -13835)) : (arr_4 [i_1])));
            var_23 = (((arr_14 [i_1] [i_1] [i_6] [i_6] [i_1] [i_1]) ? ((var_6 ? 127 : 100)) : (arr_14 [i_1] [i_1] [i_1] [i_6] [i_6] [i_1])));
            var_24 = (((arr_19 [i_6]) % 2442));
            var_25 = (((arr_8 [i_1]) << (((((((~(arr_3 [i_6])))) ? ((var_11 ? (arr_8 [i_1]) : (arr_18 [i_6] [i_6] [i_1]))) : (((arr_17 [i_1]) ? (arr_4 [i_1]) : var_3)))) - 15893248540003372988))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            var_26 ^= (arr_9 [i_7]);
            arr_25 [i_1] [i_7] = var_3;
            var_27 = arr_17 [i_7];
        }
    }
    for (int i_8 = 1; i_8 < 7;i_8 += 1)
    {
        var_28 = ((var_7 ? (min((arr_20 [i_8 + 4]), (arr_20 [i_8 + 1]))) : ((~(arr_20 [i_8 + 1])))));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    var_29 -= (!(((((((arr_19 [22]) * (arr_11 [i_8] [i_9] [i_10] [i_10])))) ? (var_3 + var_0) : (~37969)))));
                    var_30 -= var_1;
                }
            }
        }
    }
    var_31 = (min(var_31, (((((((((var_7 ? var_3 : var_5))) ? ((var_3 ? var_3 : var_10)) : ((var_3 ? var_3 : var_9))))) ? var_9 : (((((-32767 - 1) > var_4)))))))));
    #pragma endscop
}
