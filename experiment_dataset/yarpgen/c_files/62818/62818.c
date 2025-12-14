/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [i_3 - 3] [i_3 - 4] [i_3 - 3] [19] [19] [19] = -20;
                            arr_11 [i_0] [i_2] [i_2] [i_0] = (arr_0 [2] [i_3]);
                        }
                    }
                }
                var_15 = (min(var_15, (((min(-1566887889777251179, -11))))));
                arr_12 [i_0] [i_1] = (max((10 || -11), 242));
            }
        }
    }
    var_16 = ((var_10 <= (((!(((var_0 ? -576867839 : var_10))))))));
    var_17 = var_12;
    #pragma endscop
}
