/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 = var_5;
                    var_13 *= 49004;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_20 [1] [i_4] [i_4] [i_4] [i_4] [i_4] = (max(var_8, ((-(arr_8 [i_6])))));
                                var_14 = (((arr_17 [2] [i_7] [i_4 - 1] [i_3]) ? (arr_17 [i_5] [i_5] [i_4 + 1] [i_4]) : (arr_10 [4] [i_4 - 2] [4])));
                                arr_21 [i_3] [i_4] [2] [i_4] = ((((((arr_10 [i_4 + 1] [i_4 + 2] [i_4 - 2]) ? 256 : var_3))) || 0));
                            }
                        }
                    }
                    arr_22 [i_5] [i_4] [i_4] [i_3] = (!1);
                }
            }
        }
    }
    var_15 += (((~var_0) ? (var_0 & var_8) : (((var_11 != (~3404969629))))));
    #pragma endscop
}
