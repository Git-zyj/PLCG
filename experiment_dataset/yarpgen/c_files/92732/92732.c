/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 *= (1 % var_1);
                                var_21 = (arr_9 [i_0] [i_0] [i_2] [i_3 + 3] [i_4]);
                                var_22 *= (((((250 ? (((min((arr_2 [1]), var_3)))) : (((arr_5 [1] [i_1] [1]) ? (arr_10 [8] [8] [i_1] [i_1] [i_3] [i_4] [8]) : (arr_6 [i_0] [2] [2] [i_0])))))) ? (((arr_9 [8] [i_1] [i_1] [i_1] [i_1]) ? var_5 : (arr_9 [6] [i_1] [i_1] [i_3 - 1] [i_4]))) : (((-3840 && 4358755236263369879) ? var_10 : ((((arr_10 [2] [i_1] [2] [2] [i_3] [i_4] [2]) == (arr_10 [10] [0] [i_2] [0] [i_4] [i_0] [i_4]))))))));
                                arr_12 [1] [i_1] [i_0] [i_3] [i_4] = ((((!(~1552504949047299294)))));
                            }
                        }
                    }
                }
                var_23 = (((((~(!241)))) && ((max(var_3, (var_15 & var_16))))));
                var_24 = var_7;
            }
        }
    }
    var_25 = (max(246, 3396));
    var_26 = (((((127 || var_9) ? var_17 : var_11)) == ((6 ^ ((var_17 ? var_13 : var_2))))));
    var_27 = var_3;
    #pragma endscop
}
