/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_0] [4] [8] = (((!var_2) && (var_1 && var_16)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = ((~1) != ((((min(var_5, var_6))) << 1)));
                                var_21 = (1 >= 1);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((max((120 * var_8), -var_3)));
    #pragma endscop
}
