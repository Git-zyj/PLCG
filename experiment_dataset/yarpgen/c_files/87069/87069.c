/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_11 *= arr_6 [i_0] [i_1] [2] [i_3];
                            arr_8 [i_0] [i_0] [i_1] [i_2] [14] = ((((((7548211051187376023 ? var_1 : 5867428529469509433)))) / (((var_8 != (arr_3 [i_2 - 4] [i_2 - 3]))))));
                            arr_9 [i_0] = (arr_6 [i_0] [i_0] [i_0] [i_3]);
                        }
                    }
                }
                var_12 = (min(var_12, (((-(min(14543021747404370907, 3978542819)))))));
            }
        }
    }
    var_13 = var_1;
    #pragma endscop
}
