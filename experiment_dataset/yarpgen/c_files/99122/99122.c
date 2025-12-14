/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = var_12;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] = (max((((-21898 < (max(var_5, 0))))), (((((254 ? 0 : 361416652))) ? (arr_10 [i_0] [i_2] [i_2 - 1] [i_3 - 1] [i_2 - 1]) : 1))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= (arr_14 [i_0] [i_2 - 1]);
                                var_18 *= (((arr_8 [10] [10] [i_0]) != 44701));
                                var_19 += (!-38);
                                var_20 = ((((((44701 ? 1 : 1970777593)) * var_6))));
                            }
                        }
                    }
                    var_21 = var_17;
                }
            }
        }
    }
    var_22 = (max(var_22, var_3));
    #pragma endscop
}
