/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(var_14 > -134784663)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        var_18 -= var_9;
                        arr_12 [i_0] [11] [i_1] [i_0] = ((-134784662 ? ((var_3 ? var_6 : var_3)) : (!var_10)));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_16 [i_4] [8] |= var_0;

        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_19 = (max(var_19, (arr_17 [i_5])));
            arr_20 [i_4] [i_5] [i_4] = ((!(!-var_16)));
            arr_21 [i_5] [i_4] [i_4] = (((min((min(var_12, var_16)), (65516 >= var_4))) != ((-(~var_1)))));
        }
        var_20 = (min(var_20, ((min(30766, var_2)))));
        arr_22 [i_4] = var_14;
        arr_23 [i_4] = 134784678;
    }
    var_21 *= var_9;
    #pragma endscop
}
