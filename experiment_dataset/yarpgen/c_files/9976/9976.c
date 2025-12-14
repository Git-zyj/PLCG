/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (((var_11 ? ((max(1, 2687389979))) : (min(var_7, 8028063468740011009)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_4 - 1] [i_3 + 3] [i_2] [4] [i_0] = ((((!var_2) ? (arr_4 [i_2 + 1] [i_3 + 1] [i_3 + 2] [i_4 + 1]) : 10028569765164393391)));
                                var_18 |= ((((((arr_9 [i_0] [i_1] [i_2 - 2] [i_2] [i_3] [i_4 + 2]) ? (0 < 1) : (4044151542 & 2687389966)))) & ((((-3984 ? 663460483 : 6331052388720315618)) & (!26183)))));
                            }
                        }
                    }
                }
                var_19 = (arr_11 [i_0] [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_20 *= ((min(var_6, (!32766))));
                            var_21 = (min(var_21, (((((min(-983730508, -32747))) ? (arr_6 [i_6 + 1]) : (((arr_17 [i_6] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 + 3]) ? (arr_3 [i_6 + 2]) : (arr_16 [i_0] [i_0] [i_5] [i_6] [i_6 + 3]))))))));
                        }
                    }
                }
                var_22 = ((((min(((2032 ? var_0 : var_4)), var_8))) | (min((arr_6 [i_0]), (arr_6 [i_1])))));
            }
        }
    }
    #pragma endscop
}
