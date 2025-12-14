/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, -16715852272371642470));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] = 16715852272371642460;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_19 += 555137686;
                            arr_13 [i_1] = (~3739829609);
                            arr_14 [i_0] [i_1] [i_1] [1] [10] [i_3] = ((-(~-9216081873866947774)));
                            arr_15 [i_1] [i_1 - 2] [i_1 - 2] [i_1] = -1686709344;
                        }
                    }
                }
                var_20 ^= 1686709343;
            }
        }
    }
    #pragma endscop
}
