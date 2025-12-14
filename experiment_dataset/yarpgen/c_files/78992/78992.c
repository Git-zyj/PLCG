/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_0);
    var_16 = ((1956649849 ? (((((((var_0 ? var_8 : var_13))) <= (min(31, var_12)))))) : var_10));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [8] = var_4;
                                arr_17 [i_0] [i_3] [i_2] [i_3] [i_4] = (arr_5 [i_0]);
                            }
                        }
                    }
                    var_17 = (min(var_17, 1));
                }
            }
        }
    }
    #pragma endscop
}
