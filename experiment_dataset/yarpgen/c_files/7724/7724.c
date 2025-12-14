/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((min(var_9, var_14))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = var_8;
                var_18 = (((((min(var_0, 5045978114805342521)) + var_11)) + (max((3043967829 - var_0), var_13))));
                var_19 = arr_1 [i_1 - 1] [i_1 - 1];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 &= (arr_1 [i_0] [i_1 - 1]);
                            var_21 = (min((((((max((arr_6 [i_0] [i_3] [i_2] [i_0] [0] [i_0]), 14548515641098087350))) || ((min(2907903941961740107, 0)))))), ((-((~(arr_3 [i_1] [i_1])))))));
                            var_22 = (min(((((((arr_3 [i_1] [i_1]) ? 26603 : (arr_7 [i_0] [i_0] [i_1] [i_0])))) ? (!26603) : var_15)), 2907903941961740107));
                        }
                    }
                }
                var_23 = (min((arr_7 [i_1 - 1] [i_1] [i_1] [i_1 - 1]), (arr_2 [i_1 - 1] [i_1 - 1])));
            }
        }
    }
    var_24 = var_12;
    #pragma endscop
}
