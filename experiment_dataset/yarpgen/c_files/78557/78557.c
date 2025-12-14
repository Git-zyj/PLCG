/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 2] = min((((arr_6 [i_3 - 1]) ? (arr_6 [i_3 - 1]) : (arr_6 [i_3 - 1]))), (((!((min((arr_9 [i_0] [i_1] [i_2] [i_0]), (arr_6 [i_1 + 1]))))))));
                                arr_12 [i_0] [i_0] [i_0] [i_3 - 1] [i_0] [i_3 - 1] [i_0] = (arr_8 [i_1]);
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_0] = (min((arr_0 [i_0] [i_0]), -14280));
                                var_18 = ((+(((min((arr_2 [i_0] [i_4] [i_4]), (arr_9 [i_0] [i_0] [i_3] [i_4])))))));
                            }
                        }
                    }
                    var_19 = (arr_8 [i_0]);
                    arr_14 [i_0] [i_0] = ((~((((((arr_1 [i_0] [i_1]) ? var_10 : 32))) ? (~223) : ((var_1 ^ (arr_7 [i_0] [i_1 + 1] [i_1 + 2] [i_0])))))));
                    arr_15 [i_0] = (min(-9210094964177043622, 3042390964));
                }
            }
        }
    }
    var_20 = (!7384);
    var_21 = (max(var_21, ((((min(var_17, var_5)))))));
    #pragma endscop
}
