/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = var_9;
                arr_6 [i_0] [i_1] = (((-27174 + 18282356610989291918) - 91));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_11 [12] [i_3] [i_2] [i_3] [i_0] = (max((((1859314502932236275 ? var_1 : (((0 ? var_3 : -119)))))), var_0));
                            arr_12 [i_3] = (min(-27174, (arr_8 [i_0] [i_1])));
                            var_12 = (min(var_12, (arr_7 [i_2] [i_2] [i_2] [i_3 + 2])));
                            arr_13 [i_3] = 27172;
                            arr_14 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] = (min(((1 ? (~31) : (arr_8 [i_0] [i_0]))), (~-32750)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 23;i_5 += 1)
        {
            {
                var_13 = (((min((31 + 112), (max((arr_16 [i_4]), -1701215524)))) >= ((((max((arr_20 [i_4]), (arr_19 [i_4]))) > (((27174 ? (arr_9 [i_4] [i_5] [i_5] [12]) : 1))))))));
                var_14 = (max((min((arr_5 [i_5 - 1] [i_5 + 1]), (arr_7 [i_5] [i_5 + 1] [i_5 - 1] [i_5 + 1]))), (max((arr_7 [i_5] [i_5 + 1] [i_5] [i_5 + 1]), (arr_7 [i_4] [i_5 - 1] [i_5] [i_5 - 2])))));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_15 = (max(var_15, (((((max((max(130, (arr_8 [i_5] [i_6 + 1]))), 1))) ? (((~((0 >> (((arr_22 [i_6]) - 2828214471890142030))))))) : (((arr_7 [i_4] [i_4] [1] [i_4]) ? ((var_10 / (arr_18 [i_7] [i_6]))) : (arr_2 [0]))))))));
                            arr_27 [i_4] [i_5] [i_5] [i_6 - 1] = ((var_0 >> (((((arr_24 [i_6 - 2] [i_4] [i_7 - 2] [i_7] [i_5] [i_5 - 2]) * (arr_24 [i_6 + 1] [6] [i_7 - 2] [i_7] [i_6] [i_5 - 1]))) - 1375519720))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
