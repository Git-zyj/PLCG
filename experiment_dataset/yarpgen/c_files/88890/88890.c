/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((47 ? 102 : 3790125045987740565))) ? (((var_7 ? var_10 : var_14))) : (!18385702578870652017)));
    var_17 = (!var_3);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 - 1] [i_1] &= (((arr_3 [i_1]) ? (((-21072 - ((min(1, -102)))))) : ((3790125045987740565 ? 48 : 14656619027721811051))));
                arr_6 [i_0] [i_0] = (max(var_10, ((-(((arr_2 [i_0]) ? (arr_1 [i_0]) : var_0))))));
                arr_7 [i_0] = var_6;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_13 [7] [i_1] [i_2] [i_0] [i_1] [i_3 + 1] = (arr_0 [i_0]);
                            arr_14 [i_2] |= var_9;
                        }
                    }
                }
                arr_15 [i_1] = (~var_3);
            }
        }
    }
    var_18 = var_6;
    var_19 = (!var_11);
    #pragma endscop
}
