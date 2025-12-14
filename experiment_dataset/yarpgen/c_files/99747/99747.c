/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (min(-4241, (max(var_11, 4240))));
                var_16 = (max(var_16, -4241));
                var_17 = max((((29362 >= (min(0, 65535))))), (max(1, 1536)));
            }
        }
    }
    var_18 = (max(var_14, var_12));
    var_19 = 18446744073709551615;

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_6 [i_2] = var_5;
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_20 = var_8;

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_16 [8] = (!var_2);
                        var_21 &= 315;

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_22 = var_6;
                            var_23 = (max(var_23, (arr_7 [13] [i_3 - 3])));
                        }
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        arr_21 [i_2] [i_2] [i_2] = ((+((-((var_8 ? (arr_12 [11] [i_3] [i_4] [i_3]) : var_6))))));
                        var_24 = (max(var_24, ((min(var_4, -32767)))));
                        var_25 = (max(var_25, (((((min(50313, ((((arr_19 [i_7] [1] [17] [i_2]) == var_9))))))) / 4954056147750285648))));
                        arr_22 [i_7] [1] = 255;
                    }
                    for (int i_8 = 3; i_8 < 16;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_26 = (max(var_26, ((min(var_3, (var_6 && -4241))))));
                            var_27 = ((((max(11167, 65281))) ? 1 : (min(((min(1, (arr_4 [i_3])))), (~0)))));
                            arr_28 [i_2] [i_3] [i_8] [i_8] [i_8] [i_2] [i_9] = 1;
                            arr_29 [1] [i_3] [i_3] [i_3] [i_8] = (max(((var_12 + (arr_7 [i_3 - 2] [i_8 - 1]))), ((-5790 ? 38376 : 11630))));
                        }
                        arr_30 [i_2] [i_8] [i_4] [i_8] = ((11630 ? 5396122755924960441 : 28032));
                        var_28 = (((!-18325) / (arr_7 [1] [1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
