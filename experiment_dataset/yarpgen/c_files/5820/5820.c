/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (3630 >= (((max(16680, 3623)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 -= (arr_3 [i_0] [i_0]);

        /* vectorizable */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_0] = 10487109632182959931;
            var_16 = 32803;
            arr_8 [i_0] [i_1] = (((((arr_4 [i_0] [i_0] [14]) * 7214)) / ((212 ? (arr_5 [i_0]) : (arr_6 [i_0] [i_0] [i_0])))));

            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_20 [i_0] [i_1 - 1] [i_2] [i_3] [11] = (((arr_15 [i_0] [i_0] [i_0] [i_0]) ? (-7202 >= 243) : -7201));
                            arr_21 [i_0] [i_1] [6] [i_2 + 1] [i_3] [i_0] [i_3] = var_2;
                        }
                    }
                }
                var_17 *= (arr_19 [14] [i_0] [i_1] [i_1] [i_1 + 1] [1] [i_2 + 1]);

                for (int i_5 = 3; i_5 < 15;i_5 += 1)
                {
                    arr_25 [i_0] [i_0] [i_2 + 1] [i_5] = ((((arr_10 [i_5] [3] [i_0] [i_0]) ? 7199 : 1)));
                    var_18 = var_1;
                    arr_26 [6] [i_2] |= (arr_4 [i_0] [14] [1]);
                }
                arr_27 [17] [i_1] [i_0] = var_10;
            }
        }
        arr_28 [i_0] = ((var_10 ? (max(1, -1293523836)) : ((1629076649106452775 ? 1602898351 : 1))));
    }
    var_19 = var_3;
    #pragma endscop
}
