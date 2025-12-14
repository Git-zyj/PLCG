/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    var_17 = ((!((((((var_9 ? var_0 : 60536))) ? (!-1501214051) : (7869151809314500166 != 1501214056))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_18 *= ((!(arr_9 [i_3 - 1] [i_1] [13] [13] [13] [i_0])));
                            arr_12 [i_3] [i_1] [i_1] [i_1] [i_1] [9] = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3]);
                            arr_13 [i_0] [i_0] [i_0] = var_9;
                        }
                    }
                }
                var_19 = (max(var_19, -10499));
            }
        }
    }
    #pragma endscop
}
