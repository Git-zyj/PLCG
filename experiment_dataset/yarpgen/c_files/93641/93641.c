/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (((((((min(var_12, 46154))) ? ((46143 ? (arr_4 [i_1]) : var_15)) : ((((arr_3 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_1] [i_1]) : (arr_3 [i_0] [i_0] [i_0]))))))) || ((((arr_2 [i_0]) ? (min((arr_0 [13]), var_4)) : (((3 ? (arr_2 [i_0]) : var_5))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_21 = (arr_5 [i_0 + 2] [i_1] [i_2] [i_3 - 1]);
                            arr_10 [i_0] [10] [i_2] [i_0] = ((~(min((arr_0 [i_0 - 3]), (arr_0 [9])))));
                            var_22 = var_8;
                        }
                    }
                }
                var_23 = (((((~((min(var_18, var_12)))))) + ((((!(arr_5 [i_0] [10] [20] [7]))) ? (~8289520695902683250) : -32752))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_24 = -var_11;
                            var_25 = (min((~20), ((((((var_1 ? var_7 : (arr_5 [i_0] [i_1] [i_4] [i_1])))) != (arr_1 [i_0] [i_0]))))));
                            arr_17 [0] [i_4] = ((((((max(var_10, var_16))) ? (arr_9 [i_0] [i_4] [i_4]) : (max(4294967276, 19393)))) + var_2));
                        }
                    }
                }
            }
        }
    }
    var_26 = var_17;
    var_27 = 46142;
    #pragma endscop
}
