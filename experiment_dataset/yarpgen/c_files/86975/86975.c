/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86975
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
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_12, ((((((var_1 ? (arr_0 [i_1]) : (arr_0 [i_0])))) ? (((!(arr_0 [i_1])))) : (((!(arr_0 [i_2])))))))));
                            var_13 = ((((((arr_1 [i_0]) >= var_1))) <= var_3));
                        }
                    }
                }
                arr_11 [i_1] = (max(8950, var_9));
                var_14 |= ((-(((1 && 1) ? (arr_4 [i_1] [9] [i_1]) : -8709808153555799938))));
                arr_12 [i_0] [i_0] [i_1] |= ((2147483647 ? 1620994441 : 1));
            }
        }
    }
    var_15 = ((((-(var_10 + var_6)))) ? var_2 : ((var_9 ? ((var_7 ? var_0 : var_6)) : ((max((-2147483647 - 1), var_2))))));
    #pragma endscop
}
