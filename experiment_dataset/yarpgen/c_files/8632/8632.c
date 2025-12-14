/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = ((var_11 ? ((((min(-1843923740265138427, 44695))))) : (arr_1 [i_0] [i_0])));
                var_16 = (var_7 <= -2079097496);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_17 = 69;
                            var_18 ^= (((3144546782615800218 ^ 0) ? (((arr_0 [i_2]) / (arr_0 [i_2]))) : ((((arr_9 [i_2] [i_0 + 1]) || (arr_9 [i_2] [i_0 - 3]))))));
                        }
                    }
                }
                arr_10 [i_0] [i_0 - 3] = (arr_2 [i_0] [i_0]);
            }
        }
    }
    var_19 = (min(var_19, var_4));
    #pragma endscop
}
