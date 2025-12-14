/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_10 &= 2013265920;
                            arr_9 [9] [i_0] = var_3;
                            arr_10 [i_0] [i_0] [i_2] [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? ((((arr_2 [i_0] [i_1 + 1]) >> (((((var_2 < var_3) ? (arr_7 [i_0 + 2] [i_1 + 1] [i_2 + 1]) : (arr_3 [i_0]))) - 94))))) : ((((arr_2 [i_0] [i_1 + 1]) >> (((((((var_2 < var_3) ? (arr_7 [i_0 + 2] [i_1 + 1] [i_2 + 1]) : (arr_3 [i_0]))) - 94)) + 98)))));
                            arr_11 [i_0] [0] = ((231 && 1) ? 22134 : (~var_9));
                            var_11 = ((~(min(15, (((arr_2 [i_0] [i_0]) & (arr_3 [i_0])))))));
                        }
                    }
                }
                var_12 = (max(-522135669, ((((arr_5 [i_0] [i_0] [i_0]) < ((var_6 ? var_1 : (arr_6 [i_1] [i_0] [i_0]))))))));
            }
        }
    }
    var_13 |= ((522135687 ? -1 : 0));
    var_14 = (((((63 && 522135691) ? (((-22113 ? 28896 : 15))) : var_7)) ^ var_7));
    var_15 *= var_2;
    #pragma endscop
}
