/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (((((-(var_11 & 11644)))) ? (((min(var_6, var_1)))) : (~7)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 &= ((((var_2 == (arr_10 [10] [10] [i_2] [i_3] [i_4] [i_3]))) ? 53891 : (((((~(arr_9 [i_1] [i_1] [10] [i_1] [i_1] [i_1]))) == var_4)))));
                                var_15 = ((~(~var_5)));
                                var_16 += ((-(((!(arr_6 [16] [1] [i_2] [i_3]))))));
                                var_17 = (max(var_17, -712411483831301702));
                            }
                        }
                    }
                    var_18 = var_12;
                }
            }
        }
    }
    var_19 = (max(var_19, (((((max(53896, -41))) ? var_7 : (((~(var_12 <= 156)))))))));
    #pragma endscop
}
