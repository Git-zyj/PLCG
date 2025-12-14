/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = (max(var_14, (min(((var_12 ? ((var_0 ? var_9 : var_10)) : var_9)), 6847))));
    var_15 = var_11;
    var_16 ^= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = 87;

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    var_18 = (((!169) == ((-var_2 ? 169 : ((max(26257, 26257)))))));
                    var_19 = (max((max((arr_3 [i_1 - 1] [i_2 + 1]), (arr_4 [i_1 - 2] [10]))), var_6));
                    arr_6 [i_0] [i_0] = (max((~var_6), (min((((arr_0 [i_0] [i_1]) >> (((arr_3 [2] [i_1]) - 9221)))), (arr_4 [i_0] [i_1])))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_20 ^= 18446744073709551615;
                    arr_9 [i_3] [i_0] [i_0] = -var_3;
                    arr_10 [i_0] [i_1] [i_3] = (((((32767 ? var_8 : 7))) - var_7));
                    var_21 ^= (((((19358 ? (((var_4 ? var_5 : (arr_4 [9] [i_1 - 2])))) : (arr_5 [i_0] [i_1 - 1] [i_1 + 1] [i_3])))) ? (((arr_4 [i_0] [i_1 - 2]) | var_9)) : 49262));
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_22 = (min(var_22, ((((min(7, (arr_3 [i_1 - 2] [i_1 - 1]))))))));

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_23 ^= (arr_14 [i_5]);
                        var_24 = ((0 ? ((((arr_2 [i_0]) && (!1)))) : -5625));
                        var_25 = ((!((max((max(-5625, 3166208010530164890)), (((arr_4 [i_4] [i_5]) ? var_4 : var_1)))))));
                    }
                    var_26 = var_6;
                }
                arr_15 [i_0] [i_0] [i_0] = (min(((~((min(0, (arr_1 [i_1])))))), (((~0) ? var_8 : 10084))));
                arr_16 [i_0] [i_0] [i_0] = var_10;
            }
        }
    }
    #pragma endscop
}
