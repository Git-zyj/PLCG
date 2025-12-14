/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min((11 == 2147483648), var_0));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [8] [i_0] [9] [i_0 + 2] = (arr_12 [i_0 + 4] [13] [i_2 - 1] [i_3 + 1]);
                                var_11 = (min(var_11, ((((((((16 ? 16368 : 824831246))) ? 3743843251750274736 : (arr_14 [i_3 - 2]))) < (arr_4 [10]))))));
                            }
                        }
                    }
                }
                var_12 -= ((-20253 ? -105 : 824831246));
            }
        }
    }
    var_13 = var_2;
    var_14 = (4186736146323399509 < 262144);
    var_15 = ((var_0 ? var_6 : var_6));
    #pragma endscop
}
