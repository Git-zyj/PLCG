/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((-((var_1 ? var_13 : var_1))))) ? (((var_1 ^ var_0) ? (var_13 / var_4) : (!0))) : var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [10] = var_12;
                    var_15 = ((193154855004632447 ? 0 : 0));
                    arr_9 [i_1] [i_1] [i_1] = var_0;
                    var_16 = ((((var_1 ? -var_1 : -var_4)) != ((2619294437 ? 1907701242890977047 : 0))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_17 -= var_5;
                            arr_20 [1] = (((~((var_10 ? var_6 : var_0)))));
                            arr_21 [10] &= 255;
                            arr_22 [i_3] [i_4] [i_6] = var_12;
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    arr_25 [i_3] [14] [i_7] = (66 >= 162844383104870769);
                    var_18 *= var_6;
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_19 = (((((1675672859 + 1356843391) ? ((-6 ? (-9223372036854775807 - 1) : 190)) : 0)) != (((-8748 ? ((2619294461 ? 1675672834 : 64)) : (((0 ? 1223127707 : -1141789104))))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {
                    arr_35 [i_8] [i_9] [i_10] = (((~var_3) ^ ((var_4 ? var_5 : var_13))));
                    var_20 = var_4;
                    var_21 ^= ((!(((-var_6 ? var_11 : (-6 + 141))))));
                    var_22 = (((var_1 ? var_9 : var_12)));
                }
            }
        }
        var_23 -= var_3;
    }
    var_24 = ((!(((-var_13 ? (var_4 + var_11) : ((var_0 ? var_9 : var_9)))))));
    #pragma endscop
}
