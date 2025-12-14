/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (((((((min((arr_7 [i_1] [i_1] [i_0]), var_7))) || ((max(var_3, (arr_0 [20] [i_1]))))))) - (((var_0 != ((5745223108104829942 ? var_1 : 4095)))))))));
                    var_12 = (arr_6 [i_2] [i_0] [i_0] [i_0]);
                    arr_8 [i_0] [12] [i_0] [i_0] = (max((arr_2 [i_0] [21]), ((~(arr_5 [i_0] [i_1])))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_11 [i_0] = ((-((min(-30231, var_2)))));
                        var_13 -= (arr_9 [i_3]);
                        var_14 = (!-15375);
                        arr_12 [i_0] [i_0] [i_2] [i_0] [i_3] [i_3] = var_8;
                    }
                    arr_13 [i_0] [i_0] = (((arr_6 [i_2] [i_0] [i_0] [i_0]) || var_4));
                }
            }
        }
        arr_14 [i_0] = (arr_0 [i_0] [i_0]);
    }
    var_15 |= (((min((var_8 / var_6), var_5))) ? var_8 : var_2);
    #pragma endscop
}
