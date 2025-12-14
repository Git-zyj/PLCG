/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((((2803208122 <= (((67 ? var_4 : var_8))))) ? (!2803208132) : (((-32 || var_9) >> (34885 - 34858))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((!((min(var_10, var_8)))));
                arr_7 [i_0] [i_0] = (!8);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_13 = ((var_3 + 2147483647) >> (var_4 - 86));
                    var_14 = (arr_3 [i_0]);

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_15 = var_6;
                        var_16 = (var_8 - var_0);
                    }
                    var_17 = (((arr_0 [7]) * (!var_1)));
                    arr_13 [12] [12] [i_0] = (!0);
                }
            }
        }
    }
    var_18 = var_9;
    var_19 = (max((min((var_4 | var_6), (min(var_4, 4294967295)))), (((var_5 && ((min((-127 - 1), var_0))))))));
    #pragma endscop
}
