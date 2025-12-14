/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((7168 ? 58368 : 58368));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 ^= ((var_15 * ((((((arr_5 [1]) ? 1 : (arr_8 [i_0] [i_1 - 3] [i_1 - 3] [i_2] [5])))) ? var_9 : 58368))));
                            var_19 ^= (((7168 + ((-(arr_5 [i_1]))))));
                        }
                    }
                }
                var_20 = ((((58368 || 1) * (arr_4 [i_0] [4] [i_1 - 4]))));
            }
        }
    }
    var_21 = (max(var_21, 58362));
    #pragma endscop
}
