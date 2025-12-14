/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 31;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (arr_2 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_18 -= (max((min((arr_9 [i_0] [19] [i_2] [i_3]), (((!(arr_5 [i_0] [i_0] [i_0])))))), ((((arr_1 [i_0]) || ((max(65535, var_1))))))));

                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                var_19 += ((-((((!(arr_0 [i_1] [i_1])))))));
                                var_20 = var_13;
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_21 = (min(var_21, (arr_9 [i_0] [i_0] [i_0] [i_0])));
                                var_22 = (((((((arr_7 [i_1] [i_1] [0]) | var_9)) * (arr_5 [i_0] [i_1] [i_2]))) < var_12));
                            }
                            var_23 = (min((arr_15 [i_0] [i_0] [i_1] [i_2] [i_3]), (min((arr_17 [i_0] [i_1] [i_2] [i_3]), 16449720272154733418))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_24 += (((min((arr_12 [i_0] [6]), 15222))));
                            var_25 = var_15;
                        }
                    }
                }
            }
        }
    }
    var_26 = var_11;
    #pragma endscop
}
