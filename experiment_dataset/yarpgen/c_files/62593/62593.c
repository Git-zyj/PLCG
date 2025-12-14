/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, (-2070481778 / 16383)));
                            var_15 = max((-386656197 || -386656197), -16386);
                        }
                    }
                }
                arr_15 [i_0] [i_0] = var_11;
                var_16 = 230384209;
                arr_16 [i_0] [7] = (var_13 != 1117754959);
                arr_17 [14] [i_0] = (((((-386656197 ? -1 : -2070481793))) || 63));
            }
        }
    }
    var_17 = (max(var_17, var_9));
    var_18 &= (var_5 == var_5);
    #pragma endscop
}
