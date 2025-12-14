/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = ((~(~-117)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        arr_13 [12] [12] |= (min(((max(120, 1))), 9223372036854775807));
                        var_16 = -177;
                    }
                    arr_14 [i_1] [1] = 16128;
                }
            }
        }
    }
    #pragma endscop
}
