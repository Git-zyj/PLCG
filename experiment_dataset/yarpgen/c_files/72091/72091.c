/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!8851071213385342140);
    var_17 ^= var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = ((!((((arr_1 [i_1 - 1]) ? 134 : var_6)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_4] [i_2] [i_3] [i_4 + 2] = (-1841550027 % 26722);
                                arr_17 [i_0] [23] [8] [i_2] [i_3 - 1] [i_4] = ((~(arr_2 [i_0] [i_0] [i_0])));
                                var_19 = (min(var_19, (((26722 ? 26722 : -8851071213385342140)))));
                                arr_18 [i_4] [i_2] [i_0] [i_2] [i_1] [i_0] [i_4] = max((26722 >= 26722), (arr_4 [i_1 - 2] [i_3 - 2] [i_4 + 3]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_6;
    #pragma endscop
}
