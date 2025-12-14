/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((7 ? 2285629416 : 1));
                var_15 = var_3;

                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_16 *= var_7;
                                var_17 = ((-(248 != 65306)));
                            }
                        }
                    }
                    var_18 = ((((((!(((15417 ? 0 : var_10))))))) <= (((arr_8 [i_0] [i_0] [i_0]) ^ var_4))));
                    arr_13 [i_0] [i_0] [i_0] [6] = (arr_12 [12] [i_1 + 1] [i_1 + 3] [i_1 - 2] [i_2] [i_2 - 3]);
                }
            }
        }
    }
    var_19 = (!var_0);
    #pragma endscop
}
