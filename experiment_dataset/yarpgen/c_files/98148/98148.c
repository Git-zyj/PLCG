/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_14 |= (arr_11 [i_2]);
                                var_15 = ((!(arr_0 [i_0])));
                                arr_12 [i_0] [8] [i_2] [i_3] [i_0] = (!23033);
                            }
                        }
                    }
                }
                var_16 = ((88 && (((~(arr_8 [i_0 - 1] [i_1] [i_1] [i_1] [i_1] [i_0] [i_1]))))));
                var_17 *= -14;
                var_18 = (min(var_18, (((~(arr_11 [i_1]))))));
                var_19 = 32768;
            }
        }
    }
    var_20 = var_2;
    #pragma endscop
}
