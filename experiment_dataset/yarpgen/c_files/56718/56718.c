/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_10 = ((~(((!(1 - -1026373124))))));
                    var_11 = (min(var_3, 1026373121));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_12 [1] [i_1] [i_2 + 2] &= ((~((-1434553127 | ((12644 >> (1636439349 - 1636439321)))))));
                                var_12 = (~(~var_6));
                                var_13 = var_8;
                                arr_13 [20] [i_0] [15] [i_0] [i_3] [i_1] [i_4] = ((min(var_6, 12632)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = ((-(((max(var_6, var_2)) % var_6))));
    var_15 = (min((1205639128 >= -var_2), (~var_0)));
    #pragma endscop
}
