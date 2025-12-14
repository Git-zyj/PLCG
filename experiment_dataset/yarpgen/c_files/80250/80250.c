/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_2] [6] [4] |= (arr_5 [i_0] [i_0] [i_2]);
                                arr_13 [i_4] [i_0] [i_2] [i_0] [i_0] = var_10;
                            }
                        }
                    }
                    var_13 = ((((-5365 ? var_0 : var_10)) * 63));
                    var_14 = (((((((((-78 + 2147483647) >> (var_2 + 2947403247136882991)))) < (~-3463796254895602962)))) < ((((!12) <= ((max((arr_10 [i_0] [i_1] [i_0] [i_1 - 1] [i_1 + 1] [i_0] [i_0]), (arr_4 [i_0])))))))));
                    arr_14 [i_0] [i_1] [i_0] = (min((arr_1 [i_2] [i_0]), (max(var_11, (arr_1 [i_0] [i_2])))));
                }
            }
        }
    }
    var_15 = var_10;
    var_16 = (-58 && 5014389774253590434);
    #pragma endscop
}
