/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 -= (-(((380746645790115120 >= (arr_6 [i_0] [i_1])))));
                    var_16 = (max((11 || 380746645790115120), ((var_2 < (arr_8 [i_0] [i_1] [i_2])))));
                    var_17 = (max(var_17, -var_12));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = ((arr_8 [i_0] [i_1] [i_2]) ^ ((~(1 & -380746645790115112))));
                                arr_18 [i_2] [i_3] [i_4] = (min(((-380746645790115103 ? ((max(29, 380746645790115112))) : ((~(arr_15 [i_0] [i_0] [i_4] [i_1] [i_4] [i_0]))))), var_5));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 += (((min(3459515422, var_0))));
    #pragma endscop
}
