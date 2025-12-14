/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-127 - 1) >= (((min(2838493611, var_2)) * var_5)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [6] [i_0] [i_0] [i_0] = 107;
                        var_20 = (((min(0, (min((arr_8 [i_0] [i_1] [i_1] [i_3]), 1))))) - ((max((!42), (arr_6 [i_3] [i_0] [i_1] [i_0])))));
                        var_21 = (arr_7 [17]);

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] [i_0] [i_3] [i_4] [i_2] = min((min((((1 <= (arr_2 [7])))), ((20418 ? 65535 : 0)))), (max((max(7077, -19)), 0)));
                            arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] [i_1] [i_3] = 65525;
                        }
                    }
                }
            }
        }
        arr_14 [i_0] [5] = (max((arr_1 [i_0]), (min((121 / 1308467171), (16383 >= 16748)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = (!(arr_16 [i_5]));
        var_22 = (((arr_15 [i_5] [i_5]) && (((255 ? 34117 : (arr_15 [i_5] [i_5]))))));
    }
    #pragma endscop
}
