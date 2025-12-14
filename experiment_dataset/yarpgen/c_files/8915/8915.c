/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (((((32256 ? 28 : 1)) ^ (((3106320471 && (arr_7 [i_0] [i_1] [i_2])))))))));

                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        var_18 -= (arr_8 [i_1] [11] [i_3]);
                        var_19 = (min((((-(arr_11 [i_3] [i_3] [i_3] [i_3] [i_3 - 1] [i_3])))), -var_15));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_14 [i_4] [i_4] = (((arr_6 [i_4] [i_2] [i_1]) >> (((min((arr_6 [i_0] [i_1] [i_4]), (arr_6 [i_4] [i_0] [i_0]))) - 13532155308500675880))));
                        arr_15 [i_4] = ((var_11 * ((((!0) ? 28 : 16)))));
                    }
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        arr_19 [5] = (((-(arr_17 [i_5 - 1] [i_5 - 1] [i_2] [i_5 - 1]))));
                        var_20 = (max(var_20, ((max(((~(arr_11 [12] [i_5 - 1] [i_5 + 1] [12] [i_5] [12]))), ((-(arr_11 [i_2] [i_5 - 1] [i_5 + 1] [i_5] [i_5] [i_5]))))))));
                    }
                    var_21 = var_12;
                    var_22 += ((var_2 ? (max(2147483647, -28)) : (((arr_9 [i_0] [i_1] [i_2]) ? (arr_9 [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_2])))));
                }
            }
        }
    }
    var_23 += ((-(((((-610379771 ? var_6 : 8))) ? -610379771 : ((var_5 >> (var_14 + 16540)))))));

    /* vectorizable */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        var_24 = -2623444805698798475;
        var_25 ^= ((var_7 ? var_3 : 2623444805698798478));
    }
    #pragma endscop
}
