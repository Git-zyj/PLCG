/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (arr_1 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_17 = ((!(arr_8 [i_0 + 1])));
                            var_18 = (max((((~(arr_0 [i_0 - 1])))), (((arr_3 [9] [i_1] [18]) ^ var_10))));
                            arr_10 [i_0] [i_3] [i_3] = 123871917;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
