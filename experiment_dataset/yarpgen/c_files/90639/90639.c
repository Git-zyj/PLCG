/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (min(((14049238003204039669 - (65523 > var_14))), ((((arr_2 [i_0]) ? var_1 : (min(249668509, (arr_0 [i_2] [i_0]))))))));
                    var_16 ^= ((65523 ? var_0 : ((max((arr_8 [i_0] [i_1] [i_1] [i_2]), (((arr_2 [i_1]) ? 65523 : 200)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            {
                var_17 = (((min(var_2, (var_4 % var_14))) == ((((-23389 + 2147483647) << (((((arr_9 [i_3]) + 215)) - 3766919228)))))));
                var_18 = (((((max(var_5, var_0)))) || (arr_7 [0] [0] [i_4] [i_4])));
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_19 [i_3] [17] [i_5] [i_4] [1] = ((!(((var_11 | (arr_12 [i_4 + 1] [i_3 - 1] [i_5]))))));
                                arr_20 [i_4] [6] [i_5] [i_7] = (((((((46 >> (65527 - 65515)))) / ((0 ? var_0 : var_7)))) < (65520 / var_11)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_0;
    var_20 = var_0;
    #pragma endscop
}
