/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] &= (max((!var_9), 0));
                var_11 = ((+((min((arr_1 [i_0]), (arr_1 [i_0]))))));
                var_12 = 0;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = -0;
                                var_14 = (+((+(min((arr_4 [i_2] [11]), 0)))));
                                var_15 = var_3;
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] = ((!((max(26, 1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (((((-(!1)))) ? -var_9 : ((~(~18446744073709551603)))));
    #pragma endscop
}
