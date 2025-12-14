/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_10;
    var_14 -= (var_4 + var_7);

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_15 = ((((arr_2 [18]) ? 1 : (-20 / 666968974663848429))));
        var_16 = (((((-(20 % 2146945121)))) || ((((var_5 ^ var_12) ? (2 | 793157575) : -1127961178)))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_17 = ((27257 && (-0 <= var_12)));
        arr_6 [i_1] = ((((((692927513 < (arr_1 [i_1])))))) | (((((-(arr_4 [i_1])))) / var_9)));
        var_18 = (min(var_18, (arr_2 [10])));

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_19 = (min(((((-(arr_0 [i_2]))) & (var_5 * var_10))), (((-(var_3 < 38279))))));
            var_20 = (arr_3 [i_1]);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    {
                        arr_17 [3] [i_5] = (~793157575);
                        var_21 = var_3;
                        var_22 = var_3;
                    }
                }
            }

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                arr_21 [i_6] = (~(arr_15 [i_1] [1] [i_3] [i_3] [i_6]));
                arr_22 [i_6] [i_6] [i_6] [i_1] = (((arr_18 [1] [12] [i_1] [i_1]) ? (arr_4 [i_1]) : 38278));
                var_23 -= var_7;
            }
            arr_23 [i_1] [i_1] [i_3] = var_4;
        }
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_24 = (((arr_25 [4] [7]) ^ ((-655085734 ? (arr_25 [i_7] [i_7]) : (~2338007676)))));
        var_25 = -var_4;
        arr_28 [5] = var_4;
        var_26 = ((1922009642 + ((((min(24385, 24385))) ? -9223372036854775805 : 112))));
    }
    var_27 = (min((-126 == -2338007686), ((var_1 | (min(var_3, 4426052858832062149))))));
    var_28 = ((var_12 * (max(var_12, (!-5032)))));
    #pragma endscop
}
