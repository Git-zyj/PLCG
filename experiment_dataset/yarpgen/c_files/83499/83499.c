/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((var_17 == (((var_5 ? (var_8 >= 65) : 64880)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 = ((-(16744448 % 44256)));
        arr_3 [i_0] = var_9;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_22 = (arr_4 [i_0] [i_1]);
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_23 = (!93);
                        var_24 = (min(var_24, (arr_8 [i_0] [i_0] [i_0] [i_0])));

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_25 ^= var_2;
                            var_26 = (max(var_26, 117));
                        }

                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            var_27 = (max(var_27, -var_9));
                            var_28 = ((~(((arr_10 [i_1] [i_1] [13]) ? 1014778245 : 25))));
                            var_29 = (min(var_29, (!-120)));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_30 = (min(var_30, ((((arr_15 [i_0] [i_1] [i_0] [i_0] [0]) >> ((((var_2 ^ (arr_6 [i_1] [i_1] [i_3]))) - 18512)))))));
                            var_31 = (min(var_31, (arr_17 [i_0] [i_1] [i_1] [i_3] [i_1])));
                            var_32 = (max(var_32, (4278222849 & 33)));
                        }
                        for (int i_7 = 4; i_7 < 13;i_7 += 1)
                        {
                            arr_24 [i_0] [i_1] [i_1] [i_2] [i_7 - 2] [i_0] [i_7] = ((((var_6 << (var_9 - 189673854))) + 15045583268447123002));
                            var_33 -= arr_12 [i_0] [5] [i_0] [i_0];
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 9;i_8 += 1)
    {
        arr_27 [i_8] = ((((arr_16 [i_8] [12] [1] [i_8 - 1] [i_8] [12] [6]) ^ (arr_26 [i_8 - 1] [i_8 - 1]))));
        arr_28 [i_8] = var_13;
    }
    var_34 &= 54520;
    #pragma endscop
}
