/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_10 = 505233531;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_11 = (((108 >> (7200418351386525153 - 7200418351386525138))));
                            var_12 = (var_4 >> (((max((arr_11 [i_0] [i_0] [i_0]), 1213480610)) - 1213480574)));
                            arr_12 [13] [i_1] [2] [5] = var_1;
                        }
                    }
                }
            }
        }
    }
    var_13 = var_2;
    #pragma endscop
}
