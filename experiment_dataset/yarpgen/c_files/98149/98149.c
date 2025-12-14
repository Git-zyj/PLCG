/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    var_21 = (((((var_18 ? 5863546939161060787 : 15786))) ? 15803 : var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_2] [i_1] [i_1] = ((var_10 || ((min(var_1, 49750)))));
                                arr_17 [i_0] [i_1] [i_2] [i_3] = 49747;
                            }
                        }
                    }
                }
                var_22 = ((~((~(arr_10 [i_0] [i_1] [i_0] [i_1])))));
            }
        }
    }
    #pragma endscop
}
