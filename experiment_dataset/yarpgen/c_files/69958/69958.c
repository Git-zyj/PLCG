/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = (((arr_2 [i_0]) + ((~(arr_0 [i_0])))));
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_1] [i_0] [i_1] = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_0)) & (arr_0 [i_0])));
                            }
                        }
                    }
                    var_19 -= (arr_9 [i_0] [i_2] [i_2] [i_1] [i_0]);
                    var_20 = (min(var_20, 4217179319365486214));
                }
            }
        }
    }
    var_21 = var_8;
    var_22 *= ((var_5 ? var_4 : (min(6673198638189074867, (((var_3 ? 118 : 19660)))))));
    #pragma endscop
}
