/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~1563925628);
    var_12 = (min(2024166319, (((max(7, -104))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = ((max((var_5 == var_7), ((var_10 ? (arr_0 [i_0] [0]) : (arr_3 [i_0] [i_0]))))) & ((((min(1, var_8))) << (((~var_5) - 8234760923886977297)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_14 = ((max((-127 - 1), 1)));
                            var_15 = 1;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
