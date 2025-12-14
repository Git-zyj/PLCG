/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min(var_11, var_13);
    var_17 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        var_18 ^= (max(70734896, (min(((65525 ? var_0 : 22)), var_13))));
                        arr_12 [i_3] = (((((var_11 == (!2193448536)))) - (((0 == (arr_6 [i_3] [i_3 + 3] [i_3]))))));
                    }
                    arr_13 [i_0] [i_0] = -45;

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_19 = 1918120388;
                        var_20 -= var_7;
                        var_21 = var_5;
                    }
                }
            }
        }
    }
    #pragma endscop
}
