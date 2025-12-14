/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_10 ? ((var_5 << ((((var_3 ? var_6 : 25377)) - 17092)))) : var_2));
    var_16 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 = ((((max((arr_3 [i_2]), 48933))) || 48933));
                                var_18 -= arr_6 [i_2] [i_1] [i_1] [i_0];
                            }
                        }
                    }
                }
                var_19 = 3595470044;
                arr_14 [i_0] [i_0] = max(var_3, (((((1087068241 * (arr_0 [4] [i_1])))) / (arr_6 [i_0] [i_0] [i_0] [i_0]))));
            }
        }
    }
    #pragma endscop
}
