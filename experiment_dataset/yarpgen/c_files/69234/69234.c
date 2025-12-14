/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (var_3 - -24)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_3] = var_0;
                                var_13 = (min(var_13, ((min((2206486930 >> 1), (!268435455))))));
                                var_14 = ((var_8 > (((3179612251 ? var_8 : (arr_2 [i_3]))))));
                            }
                        }
                    }
                    var_15 = 255;
                }
            }
        }
    }
    #pragma endscop
}
