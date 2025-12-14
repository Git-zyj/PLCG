/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = ((+(((!907139820) ? (arr_7 [i_0] [i_1] [i_2]) : 3387827476))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = (max((min(var_1, (((5 ? -112 : 0))))), (min(var_14, ((((arr_5 [i_3]) ? 1476640004 : var_11)))))));
                                var_21 = ((~(((arr_11 [i_0]) ? (arr_0 [i_0] [i_2]) : (arr_0 [i_2] [i_4])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_3;
    #pragma endscop
}
