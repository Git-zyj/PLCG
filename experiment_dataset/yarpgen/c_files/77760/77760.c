/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (max((((arr_0 [i_0] [i_1]) ? var_12 : (arr_0 [i_0] [i_1]))), var_9));
                var_19 ^= (max((!var_4), (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_3] [i_1] = (var_1 || (arr_12 [1] [i_1] [i_3]));
                            var_20 = -1186847502;
                        }
                    }
                }
            }
        }
    }
    var_21 ^= var_11;
    var_22 -= var_4;
    #pragma endscop
}
