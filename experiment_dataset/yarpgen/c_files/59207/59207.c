/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(((520708754 & (-101973926 | -1473448742))), var_8);
    var_21 = (~2);
    var_22 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 8;i_4 += 1)
                            {
                                var_23 = var_16;
                                var_24 = arr_2 [i_1];
                                arr_16 [i_0] [i_0] [i_4] [i_4] [i_4] = var_18;
                            }
                            var_25 |= 2147483647;
                            var_26 |= (((arr_3 [i_0 - 1]) ? -1344797261 : (arr_0 [i_0])));
                        }
                    }
                }
                var_27 &= var_10;
                arr_17 [i_0] [i_1] = var_12;
            }
        }
    }
    #pragma endscop
}
