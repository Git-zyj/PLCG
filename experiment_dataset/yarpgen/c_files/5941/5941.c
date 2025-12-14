/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 *= ((!((!(arr_8 [i_2] [i_1] [i_0])))));
                                var_14 = ((!((min(42561, 62677)))));
                                var_15 = (max(var_15, ((min(var_8, (((!(((-69 ? 42561 : 22960)))))))))));
                                var_16 = (min(var_16, var_4));
                                arr_15 [i_0] [i_0] [i_2] [i_2] [i_0] [i_4] = ((!((!(var_2 / var_10)))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_2] [i_2] = var_6;
                    var_17 = ((!(1634341342 + 1)));
                    var_18 = (((var_9 ? (!299177481003585254) : 255)));
                }
            }
        }
    }
    var_19 = var_2;
    #pragma endscop
}
