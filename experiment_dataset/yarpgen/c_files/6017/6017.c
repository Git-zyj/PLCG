/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 8813073103619115627;
    var_21 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_22 = (+-1426132888776146894);
                var_23 = var_15;
                var_24 = (arr_0 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_25 = 9223372036854775805;
                                arr_14 [i_3] [i_4 + 1] [i_3] [8] [6] [i_0] [i_0] = (((((arr_8 [i_4 - 2]) * 67553994410557440)) & ((((!(((65 ? 8369493586774282285 : 392949551)))))))));
                                var_26 = -27598;
                                var_27 = (min(var_27, 8593590965562514533));
                            }
                        }
                    }
                }
                var_28 = ((((((1426132888776146883 ? 1 : 53)))) ? 1 : ((max((arr_3 [i_0 + 2] [i_0 + 3]), (arr_3 [i_0 + 2] [i_0 + 3]))))));
            }
        }
    }
    #pragma endscop
}
