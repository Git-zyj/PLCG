/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_18, ((((((var_1 ? 45 : var_0))) || (((var_9 ? 40012619 : -13735))))))));
    var_20 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_21 *= (min(-46, (((((((arr_9 [4] [4] [4] [i_3] [i_4] [i_3 - 1] [i_2]) ? var_4 : (arr_2 [i_0] [i_4])))) && 6727)))));
                                arr_10 [18] [i_0] [i_0] [i_0 - 1] = max(((-127 ? ((var_6 ? (arr_0 [i_0] [i_2]) : var_5)) : (((-(arr_3 [i_0] [19])))))), (((((((arr_4 [i_0]) ? (arr_1 [i_0]) : 40012627))) != var_12))));
                            }
                        }
                    }
                    var_22 *= ((var_12 && (arr_8 [i_0 - 1] [i_0] [i_0 + 1] [i_2] [i_0 + 1])));
                    var_23 = (min((((max(var_2, 16383)) & ((((arr_5 [i_0] [i_0] [i_2]) ^ -19621))))), var_15));
                }
            }
        }
    }
    #pragma endscop
}
