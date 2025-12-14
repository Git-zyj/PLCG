/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 += (max((min(var_8, 340103393)), ((var_7 ? (arr_7 [i_0 - 1] [i_2 + 1] [i_1 - 3]) : (arr_8 [i_0 + 1] [i_2 + 1] [i_1 - 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 = ((~(min((arr_0 [i_1 + 1] [i_0 - 3]), (((!(arr_2 [i_0 - 2]))))))));
                                arr_16 [i_4] [i_4] [i_3] [i_4] = ((arr_1 [i_0 - 3]) ? (((arr_4 [i_0 - 3]) ^ (arr_9 [i_1 - 2] [i_1 - 2] [i_0 + 1] [i_0 - 3]))) : var_2);
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (((((((max(3954863879, 0))) ? (max(3954863902, 0)) : var_13))) ? var_1 : (var_8 < 340103393)));
    #pragma endscop
}
