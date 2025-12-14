/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-(+-59003));
    var_16 -= (~var_10);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = (((-(~-74))));
                    var_18 = (--62);
                    var_19 -= ((~((-(((!(arr_2 [i_0 - 3] [2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = (!1);
                                var_21 = 100878960869075935;
                                var_22 *= ((~((~((~(arr_8 [i_4] [i_2] [i_1] [i_0])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_23 = ((~((~((~(arr_11 [i_5] [i_5] [i_5] [17])))))));
                                var_24 = ((((!(!-59)))));
                                var_25 -= ((-(((!((!(arr_2 [i_2] [i_6]))))))));
                                arr_16 [i_0] [i_2] [i_2] [i_1] [i_0] = (!var_0);
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (~(~5984970991735204161));
    #pragma endscop
}
