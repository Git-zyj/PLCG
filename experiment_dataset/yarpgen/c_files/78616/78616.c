/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = 1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 -= var_2;

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    var_13 = (((((arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1]) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 1]) : var_0))) ? ((max((34001 ^ 603868421893487727), var_7))) : ((53662 ? var_0 : -var_5)));
                    var_14 = ((((((var_8 / (arr_2 [i_0] [i_0 - 1]))))) ? 0 : var_6));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_0 + 1] [i_1] [i_2] [i_2] [i_4 - 1] = ((var_4 ? (((arr_7 [i_2]) * var_7)) : (arr_0 [i_0 + 1])));
                                var_15 = (((arr_0 [i_0 - 1]) + (41201 + var_1)));
                                arr_16 [i_2] [i_3] [i_2] [i_1] [i_1] [i_0 - 1] [i_2] = (max(0, ((min(var_6, ((((arr_3 [i_2 - 1]) < 3464531579))))))));
                                var_16 = ((((((1557328853 - var_9) ? (arr_1 [i_0]) : -var_4))) ? (arr_6 [i_4] [i_3] [i_1] [i_1]) : (min(var_1, ((var_1 << (var_7 - 25994)))))));
                            }
                        }
                    }
                    var_17 = (arr_5 [i_2 - 1] [i_2 + 2] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
