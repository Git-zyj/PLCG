/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!((min(49785, (max(var_0, 8373)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 = var_7;
                                var_14 = 9223372036854775779;
                                var_15 |= var_0;
                                var_16 += (arr_1 [i_0] [i_0]);
                            }
                        }
                    }
                    var_17 = ((!((min((arr_2 [i_0] [i_1 - 1] [i_1 - 1]), 2147221504)))));
                }
            }
        }
    }
    #pragma endscop
}
