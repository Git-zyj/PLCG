/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_9;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = (((2732507523 ? 7094606104426162587 : 1562459767)));
                    var_15 = (!(((((65535 ? 1 : 0))) || ((max(var_1, (arr_6 [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 = (arr_0 [i_3 - 1]);
                                var_17 -= var_8;
                                var_18 = (max(var_18, (((var_3 % (arr_5 [i_3] [i_3 - 1] [i_3] [1]))))));
                            }
                        }
                    }
                    var_19 = (arr_5 [i_0 + 2] [i_0] [i_1] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
