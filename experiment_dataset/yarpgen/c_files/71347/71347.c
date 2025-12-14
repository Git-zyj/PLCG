/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 6;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        {
                            var_13 *= 17;
                            arr_11 [2] = ((min((max(var_0, var_5)), ((max((arr_4 [i_0]), 593921710))))));
                        }
                    }
                }
                var_14 ^= arr_1 [5];
            }
        }
    }
    var_15 = ((-(-186310194 / var_2)));
    #pragma endscop
}
