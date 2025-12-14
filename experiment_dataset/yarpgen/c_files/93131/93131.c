/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((max((min(var_3, 46)), (((var_9 << var_11) ? var_0 : (((min(var_2, var_10)))))))))));
    var_14 = (max(var_14, ((((~-1711208069) ? var_3 : (max(1711208069, (min(var_0, 1711208069)))))))));
    var_15 = var_1;
    var_16 = ((46 ? -1711208069 : 1711208077));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = (min(-1403060240730421106, -14));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                var_18 = (((arr_2 [i_1 - 1] [i_3 - 1]) ? 134 : 1711208083));
                                var_19 = var_10;
                            }
                        }
                    }
                }
                var_20 = -1711208066;

                /* vectorizable */
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    arr_13 [i_0] [i_1] [i_5] = (arr_1 [i_5 + 1]);
                    var_21 = ((!(4294967295 && 18446744073709551609)));
                }
            }
        }
    }
    #pragma endscop
}
